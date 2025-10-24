#include<stdio.h>
int main(){
   int n,x;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    int m1,m2,d,ans=0;
    scanf("%d %d %d",&m1,&m2,&d);
     ans= (m1*d)/(m1+m2);
    printf("%d\n",d - ans);
   }
    return 0;
}