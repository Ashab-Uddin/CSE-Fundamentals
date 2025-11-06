#include<stdio.h>
void fun(int x){
    x=20;
}
int main(){
   int x;
   scanf("%d",&x);
   fun(x);
   printf("main function value:%d\n",x);
   printf("main fun valude address:%p\n",&x);
    return 0;
}