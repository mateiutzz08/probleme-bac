#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101],p[101];
    int coduri[3],i,j=0,x=0;
    for (i=0; i<=2; i++)
        cin>>coduri[i];
    cin.get();
    cin.getline(s,101);
    for (i=0; i<strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            p[j]=s[i];
            if (p[j] + coduri[x] <= 'Z')
            {
                p[j]=p[j] + coduri[x];
                x++;
            }
            else
            {
                p[j]='A' + (p[j] - 'A' + coduri[x]) % 26;
                x++;
            }
            j++;
            if (x == 3)
                x=0;
        }
    }
    p[j]='\0';
    cout<<p;
    return 0;
}
