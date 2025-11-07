#include<stdio.h>
int main(){
   int a[5] ={10,20,30,40,50};
   printf("%p\n",&a[0]);
   printf("%p\n",&a);

   //array 0th index address is the array address
    return 0;
}