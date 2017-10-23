/**
 * fifteen.c
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 */

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

int MAX_NUM;

// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);

void swap(int row1, int col1, int row2, int col2);
bool is_left(int row_tile, int col_tile, int row_zero, int col_zero);
bool is_rigth(int row_tile, int col_tile, int row_zero, int col_zero);
int get_col(int tile);
int get_row(int tile);
bool is_above(int row_tile, int col_tile, int row_zero, int col_zero);
bool is_below(int row_tile, int col_tile, int row_zero, int col_zero);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE *file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw();

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = get_int();

        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }

    // close log
    fclose(file);

    // success
    return 0;
}

/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).
 */
void init(void)
{
    //TODO
    MAX_NUM = d*d-1; //El valor que se inicia del numero mas grande del juego
    for (int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            board[i][j] = MAX_NUM;
            MAX_NUM--;
        }
    }
    if(d % 2 == 0){//En caso de que sea par el limite
        int row = d-1; //Fila en la que se hacen los camios, la ultima
        int col1 = d - 3; //El primer valor a camiar de posicion
        int col2 = d - 2; //El segundo valor a camiar de posicion con el primero
        swap(row, col1, row, col2);
    }
}

void swap(int row1, int col1, int row2, int col2){
    int temp = board[row1][col1];
    board[row1][col1] = board[row2][col2];
    board[row2][col2] = temp;
}

void draw(void)
{
     for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(board[i][j] == 0){
                printf(" _ ");
            }
            else{
                printf("%2i ", board[i][j]); //El dos es para los espacios como en el float(%.2f), se imprime con dos posiciones
            }
        }
        printf("\n");
    }
}

/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false.
 */
bool move(int tile)
{
    //Sacar las cordenadas de 0 y el numero a mover
    int row_zero = get_row(0);
    int col_zero = get_col(0);
    int row_tile = get_row(tile);
    int col_tile = get_col(tile);
    //Determinar si el movimiento es valido
    if(is_left(row_tile, col_tile, row_zero, col_zero) || is_rigth(row_tile, col_tile, row_zero, col_zero) || is_above(row_tile, col_tile, row_zero, col_zero) || is_below(row_tile, col_tile, row_zero, col_zero)){
        swap(row_tile, col_tile, row_zero, col_zero);
        return true;
    }
    return false;
}

int get_row(int tile){
    for (int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(board[i][j] == tile)
                return i;
        }
    }
    return -1;
}

int get_col(int tile){
    for (int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(board[i][j] == tile)
                return j;
        }
    }
    return -1;
}

bool is_left(int row_tile, int col_tile, int row_zero, int col_zero){
    bool condition1 = row_tile == row_zero;
    bool condition2 = col_tile + 1 == col_zero;
    bool condition3 = col_zero > 0;
    return condition1 && condition2 && condition3;
}

bool is_rigth(int row_tile, int col_tile, int row_zero, int col_zero){
    bool condition1 = row_tile == row_zero;
    bool condition2 = col_tile - 1 == col_zero;
    bool condition3 = col_zero < d - 1;
    return condition1 && condition2 && condition3;
}

bool is_above(int row_tile, int col_tile, int row_zero, int col_zero){
    bool condition1 = col_tile == col_zero;
    bool condition2 = row_tile == row_zero - 1;
    bool condition3 = row_zero > 0;
    return condition1 && condition2 && condition3;
}

bool is_below(int row_tile, int col_tile, int row_zero, int col_zero){
    bool condition1 = col_tile == col_zero;
    bool condition2 = row_tile == row_zero + 1;
    bool condition3 = row_zero < d - 1;
    return condition1 && condition2 && condition3;
}

/**
 * Returns true if game is won (i.e., board is in winning configuration),
 * else false.
 */
bool won(void)
{
    int cont = 1;
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(i == d-1 && j == d-1 && board[i][j] == 0){
                break;
            }else if(board[i][j] != cont){
                return false;
            }
            cont++;
        }
    }
    return true;
        /*for(int i = 0, n = d * d - 1; i < n; i++){
        if(board[i/d][i%d] != i + 1){
            return false;
        }
    }
    return board[d-1][d-1] == 0;*/
}
