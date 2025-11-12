#include<stdio.h>
void mello(){
    printf("Mello\n");

}

void hello(){
    printf("Hello\n");
    kello();
}

int main(){
   printf("Hi!\n");
   hello();
    return 0;
}