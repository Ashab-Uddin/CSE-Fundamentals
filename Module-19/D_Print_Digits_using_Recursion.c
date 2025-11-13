#include<stdio.h>
void rec(int n){
    if(n==0){
        return;
    }
    int last =n%10;
    printf("%d ",last);
    rec(n/10);
}
int main(){
   int n;
   scanf("%d",&n);
   rec(n);
    return 0;
}