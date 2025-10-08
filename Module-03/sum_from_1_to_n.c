#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    for(int i =0;i<=n;i++){
        sum = sum+i;
    }
    printf("summation of 1 to n: %d",sum);

    return 0;
}