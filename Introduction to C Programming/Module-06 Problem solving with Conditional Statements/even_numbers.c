#include<stdio.h>
int main(){
   int x,y;
   scanf("%d",&x);
   for(int i=1;i<=x;i++){
    if(i%2 == 0){
        printf("%d\n",i);
        y = i;
    }

   }
   if(y%2 != 0){
    printf("-1");
   }
   
   
    return 0;
}