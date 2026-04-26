#include <iostream>
using namespace std;

void fii (int n)
{
    int a,b;
    for (int i=n; i>1; i--)
    {
        for (int j=1; j<i; j++)
        {
            if (i * j == n)
            {
                cout << "(" << i << " " << j << ") ";
                break;
            }
        }
    }
}

int main ()
{
    int n=12;
    fii (n);
    return 0;
}