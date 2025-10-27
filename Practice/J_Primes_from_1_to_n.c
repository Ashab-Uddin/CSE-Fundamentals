#include<stdio.h>
int main(){
   int n,prime =1;
   scanf("%d",&n);
 
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i;j++){
            if(j%i == 0){
                prime =0;
                break;
            }
            
        }
        }
        
        
    
   
    return 0;
}