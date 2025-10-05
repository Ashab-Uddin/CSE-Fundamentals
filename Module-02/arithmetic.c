#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    sum = a+b;
    int mul = a*b;
    int sub = a-b;
    int div = a/b;
    printf("Sum of a and b is: %d\n",sum);
    printf("multiplication of a and b is: %d\n",mul);
    printf("subtraction of a and b is: %d\n",sub);
    printf("divition of a and b is: %d\n",div);
    
    

    return 0;

}