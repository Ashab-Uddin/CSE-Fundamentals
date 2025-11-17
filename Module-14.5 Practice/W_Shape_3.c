#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++) // fixed here
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }
    star -= 2;      
    space = 0;      
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++) 
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star -= 2;
        space++;
    }


    return 0;
}
