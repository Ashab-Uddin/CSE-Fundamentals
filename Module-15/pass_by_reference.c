#include<stdio.h>
void fun(int* p){
    *p=20;
    printf("fun value:%d\n",*p);
    printf("fun value address:%d\n",p);

}
int main(){
   int x=10;
//    scanf("%d",&x);
printf(" main value:%d\n",x);
   fun(&x);
   printf("main function value:%d\n",x);
   printf("main fun valude address:%p\n",&x);
    return 0;
}