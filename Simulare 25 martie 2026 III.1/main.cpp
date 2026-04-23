#include <iostream>

using namespace std;

int cmmdc (int a, int b)
{
    int divizor=1;
    if (b < a)
    {
        int aux=a;
        a=b;
        b=aux;
    }
    for (int i=2; i<=a; i++)
    {
         if (a % i == 0 && b % i == 0)
            divizor=i;
    }
    return divizor;
}

int depozit (int x, int y, int z)
{
    int lungime;
    lungime=(x * y) / cmmdc (x , y);
    lungime=(lungime * z) / cmmdc (lungime , z);
    return lungime;
}

int main()
{
    int x=30,y=40,z=20;
    cout<<depozit(x,y,z);
    return 0;
}
