#include<stdio.h>
int main(){
   int x;
   scanf("%d",&x);
   int first_digit = x/1000;
   if(first_digit%2 == 0){
    printf("EVEN");
   }
   else{
    printf("ODD");
   }
    return 0;
}