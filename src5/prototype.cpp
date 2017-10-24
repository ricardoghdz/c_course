#include <iostream>

using namespace std;

void print_name(string name);

int main(void)
{
    string s;
    cin >> s;
    print_name(s);
}

void print_name(string name)
{
    cout << "hello, " << name << endl;
}
