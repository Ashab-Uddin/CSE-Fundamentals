#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;
    int line = 1; 

   
    for (int i = 1; i <= n; i++, line++)
    {
        for (int k = 0; k < space; k++)
            printf(" ");

        if (line % 2 == 0)
            for (int j = 1; j <= star; j++)
                printf("-");
        else
            for (int j = 1; j <= star; j++)
                printf("#");

        printf("\n");
        star += 2;
        space--;
    }


    star -= 4; 
    space = 1;

    for (int i = 1; i < n; i++, line++)
    {
        for (int k = 0; k < space; k++)
            printf(" ");

        if (line % 2 == 0)
            for (int j = 1; j <= star; j++)
                printf("-");
        else
            for (int j = 1; j <= star; j++)
                printf("#");

        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}
