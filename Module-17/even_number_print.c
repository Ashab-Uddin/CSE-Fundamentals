#include<stdio.h>
void printEven(int i,int n){
     if(i==n+1){
        return;
    }
    if(i%2 ==0){
        printf("%d\n",i);
    }
   
    printEven(i+1,n);
}
int main(){
   int n;
   scanf("%d",&n);
   printEven(1,n);
    return 0;
}