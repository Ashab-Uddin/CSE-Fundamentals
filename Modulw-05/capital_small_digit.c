#include<stdio.h>
int main(){
   char ch = '0';
   scanf("%c",&ch);
   if(ch >= '0' && ch <= '9'){
        printf("IS DIGIT");
   }
   else{
        printf("ALPHA\n");
        if(ch >= 'a' && ch <= 'z'){
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
   }
    return 0;
}