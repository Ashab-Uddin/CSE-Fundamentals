#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
   int v,f=0;
   scanf("%d",&v);
   for(int i=0;i<n;i++){
        if(a[i] == v){
            printf("%d",i);
        f++;
        break;
        }
        
   }
   if(f==0){
    printf("-1");
   }
    return 0;
}