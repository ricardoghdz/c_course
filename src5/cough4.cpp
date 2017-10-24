#include <iostream>

using namespace std;
void cough(int n);
void say(string word, int n);
void sneeze(int n);

int main(void)
{
    cough(3);
    sneeze(3);
}

void cough(int n)
{
    say("cough", n);
}

void say(string word, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<word<<endl;
    }
}

void sneeze(int n)
{
    say("achoo", n);
}
