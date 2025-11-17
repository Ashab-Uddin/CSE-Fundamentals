#include<stdio.h>
void printN(int n, int i){
    if(i > n) return;

    printN(n, i+1);

    printf("%d", i);
    if(i != 1) printf(" ");
}

int main(){
   int n;
   scanf("%d",&n);
   
   printN(n,1);
    return 0;
}