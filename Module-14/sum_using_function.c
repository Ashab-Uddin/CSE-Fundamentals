#include<stdio.h>
int sumit(int x,int y){
    return x+y;
    
}
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int sum=sumit(a,b);
   printf("%d",sum);
    return 0;
}