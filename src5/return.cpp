#include <iostream>

using namespace std;

int square(int n);

int main(void)
{
    cout << "x is ";
    int x;
    cin >> x;
    cout << "x^2 is "<< square(x) << endl;
}

int square(int n)
{
    return n * n;
}
