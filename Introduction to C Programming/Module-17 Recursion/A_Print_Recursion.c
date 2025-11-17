#include<stdio.h>
void print_N(int n,int i){
    if(i>n){
        return;
    }
    printf("I love Recursion\n");
    print_N(n,i+1);
}
int main(){
   int n;
   scanf("%d",&n);
   print_N(n,1);
    return 0;
}