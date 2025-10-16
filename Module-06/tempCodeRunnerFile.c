#include<stdio.h>
int main(){
   int p = 1999;
   int n,x;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x==1999){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
   }
    return 0;
}