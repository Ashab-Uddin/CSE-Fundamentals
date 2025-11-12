#include<stdio.h>
void printN(int i,int n){
    if(n==1){
        printf("%d\n",n);
        return;
    }
    printf("%d\n",n);
    printN(i,n-1);
}
int main(){
   int n;
   scanf("%d",&n);
   int i=1;
   printN(i,n);
    return 0;
}