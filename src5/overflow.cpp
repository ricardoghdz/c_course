#include <iostream>

using namespace std;

int main(void)
{
    int n = 1;
    for (int i = 0; i < 64; i++)
    {
        cout << n << endl;
        n = n * 2;
    }
}
