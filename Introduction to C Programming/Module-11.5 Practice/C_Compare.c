#include<stdio.h>
#include<string.h>
int main(){
   char s[101];
   char s2[101];
   scanf("%s %s",s,s2);
   int x = strcmp(s,s2);
   if(x<0){
    printf("%s",s);
   }
   else{
    printf("%s",s2);
   }
    return 0;
}