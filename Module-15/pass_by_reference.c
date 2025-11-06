#include<stdio.h>
void fun(int x){
    x=20;
    printf("fun value:%d\n",x);
    printf("fun value address:%d\n",&x);

}
int main(){
   int x=10;
//    scanf("%d",&x);
   fun(x);
   printf("main function value:%d\n",x);
   printf("main fun valude address:%p\n",&x);
    return 0;
}