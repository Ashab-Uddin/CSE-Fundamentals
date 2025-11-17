#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
   char s[51],t[51];
   char f[102],ff[102];
   for(int i=0;i<n;i++){
   scanf("%s %s",s,t);
   }
   for(int i=0;i<strlen(s)+strlen(t);i++){
        f[i] = s[i]+t[i];
   }
   printf("%s",f);



    return 0;
}