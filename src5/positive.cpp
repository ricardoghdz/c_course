#include <iostream>

using namespace std;

int get_positive_int();

int main(void)
{
    int i;
    cin >> i;
    cout << i << " is a positive integer" << endl;
}

int get_positive_int(void)
{
    int n;
    do
    {
        cout << "n is ";
        cin >> n;
    }
    while (n < 1);
    return n;
}
