#include <iostream>

using namespace std;
int main(void)
{
    int i;
    cin>>i;
    if (i < 0)
    {
        cout<<"negative"<<endl;
    }
    else if (i > 0)
    {
        cout<<"positive"<<endl;
    }
    else
    {
        cout<<"zero"<<endl;
    }
}
