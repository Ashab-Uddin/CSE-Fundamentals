#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int f = n/10;;
   int l = n%10;

   if(n%f == 0 || n%l == 0){
    printf("YES");
   }
   else{
    printf("NO");
   }
   
    return 0;
}