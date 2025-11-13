#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int s;
    scanf("%d", &s);

    for (int i = 0; i < r; i++)
    {
        if (s == i)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        
    }

    return 0;
}