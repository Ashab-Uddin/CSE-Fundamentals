#include<stdio.h>
#include<string.h>
int is_palindrome(char S[]){
int l=strlen(S);
char c[100];
strcpy(c, S);
   int j=l-1;
   int temp ;

   for(int i=0;i<j;i++){
        temp = S[i];
        S[i] = S[j];
        S[j] = temp;
        j--;
   }
   int flag = 1;
int i = 0;
while (i < l) {
    if (S[i] != c[i]) {
        flag = 0;
    }
    i++;
}


   if(flag==1){
    return 1;
}
else {
    return 0;
}
}
int main(){
   char S[100];
   scanf("%s",S);
int p =is_palindrome(S);
//printf("%s",S);
if(p==1){
    printf("Palindrome");
}
else{
    printf("Not Palindrome");
}

    return 0;
}