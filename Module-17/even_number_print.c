#include<stdio.h>
void printEven(int n,int i){
    if(i%2 ==0){
        printf("%d\n",i);
    }
    if(i==n){
        return;
    }
    printEven(i+1,n);
}
int main(){
   int n;
   scanf("%d",&n);
   printEven(n,1);
    return 0;
}