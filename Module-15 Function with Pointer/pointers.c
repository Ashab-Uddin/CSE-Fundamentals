#include<stdio.h>
int main(){
   int x=10;
   printf("%d\n",x);
   printf("%p\n",&x);//print the x address
   int* ptr;
   ptr = &x;
   printf("%p\n",ptr);//print the x variable address save as ptr
   printf("%p\n",&ptr);//print the ptr variable address

   *ptr =100;
   printf("%d\n",*ptr);//print the value
    return 0;
}