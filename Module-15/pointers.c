#include<stdio.h>
int main(){
   int x=10;
   printf("%d\n",x);
   printf("%p\n",&x);
   int* ptr;
   ptr = &x;
   printf("%p",ptr);
    return 0;
}