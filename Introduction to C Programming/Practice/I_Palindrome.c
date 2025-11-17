#include<stdio.h>
int main(){
   int n,x;
   scanf("%d",&n);
   int sum[101] ={0};
   int m=n,i=0;
   while (n !=0){
     x = n%10;
    n = n/10;
    sum[i] +=x;
    i++;
    
   }
//   printf("%d",x);
   for(int i=0;i<101;i++){
  printf("%d",sum[i]);

   }
   
    return 0;
}