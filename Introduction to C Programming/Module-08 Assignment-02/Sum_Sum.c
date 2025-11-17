#include<stdio.h>
int main(){
   int n;
   int possum =0,negsum =0;
   scanf("%d",&n);
   int A[n];
   for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
   }
   for(int i=0;i<n;i++){
    if(A[i]>0){
        possum += A[i];
    }
    else{
        negsum += A[i];
    }

   }
   printf("%d %d",possum,negsum);
    return 0;
}