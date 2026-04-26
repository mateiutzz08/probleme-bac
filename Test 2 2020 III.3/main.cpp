#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");

int main()
{
    int n[4]={0},x;
    while (f>>x)
    {
        if (x % 100 == 20)
        {
            if (x > n[3])
            {
                n[1] = n[2];
                n[2] = n[3];
                n[3] = x;
                continue;
            }
            else if (x > n[2])
            {
                n[1] = n[2];
                n[2] = x;
                continue;
            }
            else if (x > n[1])
            {
                n[1] = x;
            }
        }
    }
    for (int i=1; i<=3; i++)
        cout<<n[i]<<" ";
    return 0;
}