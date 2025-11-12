#include<stdio.h>
void printN(int i,int n){
    if(i==1){
        return;
    }
    printf("%d",n);
    printN(i,n-1);
}
int main(){
   int n;
   scanf("%d",&n);
   int i=1;
   printN(i,n);
    return 0;
}