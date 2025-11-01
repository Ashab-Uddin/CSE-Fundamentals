#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int space=n-1,num=1;
   for(int i=1;i<=n;i++){
    for(int k=1;k<=space;k++){
        printf(" ");
    }
    for(int j=1;j<=num;j++){
        printf("%d",j);
    }
    printf("\n");
    num++;
    space--;
   }
    return 0;
}