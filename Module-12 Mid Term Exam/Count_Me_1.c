#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
   int div2=0,div3=0;
   for(int i=0;i<n;i++){
        if(a[i] %2==0 && a[i]%3 ==0){
            div2++;
        }
        else if(a[i]%2 == 0){
            div2++;
        }
        else if(a[i]%3 == 0){
            div3++;
        }
   }
   printf("%d %d",div2,div3);
    return 0;
}