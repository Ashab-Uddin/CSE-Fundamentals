#include<stdio.h>
#include<string.h>
int main(){
   int n;
   scanf("%d",&n);
   
   for(int i=0;i<n;i++){
    char s[10001];
    scanf("%s",s);
    int c1=0,s1=0,d1=0;
   for(int i=0;i<strlen(s);i++){
        if(s[i] >= 'A' && s[i] <= 'Z' ){
            c1++;
        }
        else if(s[i] >='a' && s[i] <= 'z'){
            s1++;
        }
        else if(s[i] >='0' && s[i] <= '9'){
            d1++;
        }
   }
   printf("%d %d %d\n",c1,s1,d1);
   }
   
   
    return 0;
}