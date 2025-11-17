#include<stdio.h>
int double_it(int num){
    num *=2;
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    int dl = double_it(n);
    printf("%d",dl);
    return 0;
}