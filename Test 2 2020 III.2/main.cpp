#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],n[101];
    int j=0;
    cin.getline (s,101);
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i] != '-')
        {
            n[j] = s[i];
            j++;
        }
        else
        {
            while (s[i] != ' ')
            {
                i++;
            }
            n[j] = s[i];
            j++;
        }
    }
    n[j] = '\0';
    cout << n;
    return 0;
}