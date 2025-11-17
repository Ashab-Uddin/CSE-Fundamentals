#include<stdio.h>
int main(){
   int n,indx,index;
   scanf("%d",&n);
   int a[n];
   
   for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
   int min =a[0];
        index = 0;
   for(int i=0;i<n;i++){
        if(min > a[i]){
            min = a[i];
            index = i;
        }
   }
   printf("%d %d",min,index+1);

    return 0;
    
}