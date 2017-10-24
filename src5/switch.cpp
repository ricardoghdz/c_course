#include <iostream>

using namespace std;

int main(void)
{
    char c;
    cin >> c;
    switch (c)
    {
        case 'Y':
        case 'y':
            cout << "yes" << endl;
            break;
        case 'N':
        case 'n':
            cout << "no" << endl;
            break;
        default:
            cout << "error" << endl;
            break;
    }
}
