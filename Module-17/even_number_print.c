#include<stdio.h>
void printEven(int i){
     if(i==100){
        return;
    }
    if(i%2 ==0){
        printf("%d\n",i);
    }
   
    printEven(i+1);
}
int main(){
//    int n;
//    scanf("%d",&n);
   printEven(1);
    return 0;
}