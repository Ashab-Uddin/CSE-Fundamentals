#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", &s);

    
    int fre[26] = {0};
    char alp[27];
    int v;
    int l = strlen(s);

    for (int i = 0; i < l; i++)
    {
        v = (int)s[i] - 97;
        fre[v] ++;
        alp[v] = s[i];
    }

    for (int j = 0; j < 26; j++)
    {
        if (fre[j] != 0)
        {
            printf("%c - %d\n", alp[j], fre[j]);
        }
    }
    return 0;
}