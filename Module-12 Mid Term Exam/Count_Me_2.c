#include<stdio.h>
#include<string.h>
int main(){
   char s[100000];
   scanf("%s",s);
   char vol[6] = {'a','e','i','o','u'};
   int conts=0;
   for(int i=0;i<strlen(s);i++){
        if(s[i] != 'a' && s[i] !='e' && s[i] !='i' && s[i] !='o' && s[i] !='u'){
            conts++;
        }
   }
   printf("%d",conts);
    return 0;
}