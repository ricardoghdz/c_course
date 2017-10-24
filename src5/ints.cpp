#include <iostream>

using namespace std;

int main(void)
{
    // prompt user for x
    cout << "x is ";
    int x;
    cin >> x;

    // prompt user for y
    cout << "y is ";
    int y;
    cin >> y;

    // perform calculations for user
    cout << x << " plus " << y <<" is " << x+y << endl;
    cout << x << " minus " << y << " is " << x - y << endl;
    cout << x << " times " << y << " is " << x * y << endl;
    cout << x << " divided by " << y << " is " << x / y << endl;
    cout << "remainder of " << x << " divided by " << y << " is " << x % y << endl;
}