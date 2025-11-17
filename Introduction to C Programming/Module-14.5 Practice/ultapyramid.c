#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 2 * n - 1; // top row stars
    int space = 0;        // no space at first

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++)  // print spaces
            printf(" ");

        for (int j = 1; j <= star; j++)  // print stars
            printf("*");

        printf("\n");
        space++;      // increase spaces
        star -= 2;    // decrease stars
    }

    return 0;
}
