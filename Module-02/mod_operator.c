#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    int mod = a%b;
    printf("The mod operation of a and b is: %d",mod);
    
    return 0;
}