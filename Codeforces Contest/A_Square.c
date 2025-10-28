#include<stdio.h>
int main(){
   int n,a,b,c,d;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b && a==c && a==d && b==c && b==d && c==d){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
   }
    return 0;
}