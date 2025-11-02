#include<stdio.h>
int sumit(){
    int a,b;
   scanf("%d %d",&a,&b);
    return a+b;
    
}
int main(){
   
   int sum=sumit();
   printf("%d",sum);
    return 0;
}