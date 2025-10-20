#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int i=0;
   int j=n-1;
   int temp ;

   for(int i=0;i<j;i++){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
   }

   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
    return 0;
}