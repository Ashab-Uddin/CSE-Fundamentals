#include<stdio.h>
void mello(){
    printf("Mello\n");

}
void kello(){
    printf("Kello\n");
    mello();
}
void hello(){
    printf("Hello\n");
    mello();
}

int main(){
   printf("Hi!\n");
   hello();
    return 0;
}