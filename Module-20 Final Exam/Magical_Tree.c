#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int Line = (n / 2) + 6;  
    int space = Line - 1;  
    int star = 0;  

    // Top Tree
    for (int i = 0; i < Line; i++)
    {
        
        for (int k = 0; k < space; k++)  
        {
            printf(" ");
        }

       
        for (int j = 0; j <= star; j++)  
        {
            printf("*");
        }
        printf("\n");

       
        star += 2;  
        space--;  
    }

    //bottom tree
    for (int i = 0; i < 5; i++)
    {
        printf("     ");  
        for (int j = 0; j < n; j++)  
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
