#include<stdio.h>
int main(){
   int n,m,x,f=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d %d",&m,&x);
   for(int i=1;i<m;i++){
    f=n*(n-i);
   }
   printf("%d ",f);
   }
   
   

    return 0;
}