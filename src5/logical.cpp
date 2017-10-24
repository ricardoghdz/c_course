#include <iostream>

using namespace std;

int main(void)
{
    char c;
    cin >> c;
    if (c == 'Y' || c == 'y')
    {
        cout << "yes" << endl;
    }
    else if (c == 'N' || c == 'n')
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}
