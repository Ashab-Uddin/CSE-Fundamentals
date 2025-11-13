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
    int f=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
               f=1 ;
            }
            
        }
    }
    if(f==0){
        printf("This is not Zero Matrix\n");
    }
    else{
        printf("This is a Zero Matrix\n");
    }
}
