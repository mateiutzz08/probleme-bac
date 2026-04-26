#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int x,y,n,nr=0;
    f>>x>>y;
    while (f>>n)
    {
        if ((n >= x && n<=y) && n%2 == 0)
        {
            nr++;
            x=n+1;
        }
    }
    cout<<nr;
    return 0;
}