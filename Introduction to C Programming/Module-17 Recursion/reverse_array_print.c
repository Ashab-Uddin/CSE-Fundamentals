#include<stdio.h>
void reverse_array_print(int a[],int n,int i){
    if(i==n){
        return;
    }
    reverse_array_print(a,n,i+1);
    printf("%d ",a[i]);
}
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   reverse_array_print(a,n,0);
    return 0;
}