#include<stdio.h>
void fun(int a[]){
    a[1] = 200;
    printf("fun:%p\n",a);
}
int main(){
   int a[5]={10,20,30,40,50};
   printf("main:%p\n",a);
   fun(a);
    return 0;
}