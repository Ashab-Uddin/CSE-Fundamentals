#include <stdio.h>
int main()

{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r == c)
    {
        int a[r][c];
        int flag=1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i+j == r-1){
                    // digonal
                }
                else{
                    if(a[i][j] != 0){
                        flag=0;
                        printf("This is not a secondary Diagonal matrix\n");
                    }
                }
            }
        }
        if(flag==1){
            printf("This is a secondary Diagonal Matrix\n");
        }
        
    }
    else{
        printf("This is not a secondary Diagonal Matrix\n");
    }


}
