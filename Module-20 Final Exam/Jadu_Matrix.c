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
                if(i==j || i+j == r-1){
                    // digonal
                    if(a[i][j] != 1){
                        flag =0;
                    }
                }
                else{
                    if(a[i][j] != 0 ){
                        flag=0;
                        
                    }
                }
            }
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    else{
        printf("NO\n");
    }


}
