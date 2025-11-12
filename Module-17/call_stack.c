#include<stdio.h>
void gello(){
    printf("Gello\n");
    
}
void mello(){
    printf("Mello\n");
    gello();

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