#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);

    int x, sum = 0;

    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        x = s[i] - 48;
        sum += x;
    }

    printf("%d",sum);

    return 0;
}