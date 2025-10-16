#include<stdio.h>
int main(){
   int n,p;
   int x=0,y=0,z=0,m=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    scanf("%d",&p);
    
    if(p%2 == 0){
        y++;
    }
    else {
        z++;
    }

    if(p>0){
        x++;
    }
    else if(p<0){
        m++;
    }
   }
   printf("Even: %d\n",y);
   printf("Odd: %d\n",z);
   printf("Positive: %d\n",x);
   printf("Negative: %d\n",m);

    return 0;
}