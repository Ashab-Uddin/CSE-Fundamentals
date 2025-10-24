#include<stdio.h>
int main(){
   int n,m;
   scanf("%d %d",&n,&m);
   int a[n];
   for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
   }
   int fre[m];
   for(int i=1;i<=m;i++){
        fre[i] =0;
   }
   for(int i=1;i<=n;i++){
        int val = a[i];
        fre[val]++;
   }
   for(int i=1;i<=m;i++){
    printf("%d\n",fre[i]);
   }
    return 0;
}