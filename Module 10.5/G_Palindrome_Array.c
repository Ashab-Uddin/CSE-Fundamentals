#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n],m[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    m[i] = a[i];
   }
   int i=0;
   int j=n-1;
   int temp ;
   int f=0;


   while (i<j)
   {
        temp = a[i];
        a[i] = a[j];
        a[j]=temp;
        i++;
        j--;
   }
   for(int k=0;k<n;k++){
        if(m[k] != a[k]){
            f++;
            break;
        }
   }
    
   if(f == 0){
    printf("YES");
   }
   else{
    printf("NO");
   }
   
    return 0;
}