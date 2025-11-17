#include<stdio.h>
#include<string.h>
int main(){
   char str1[11];
   char str2[11];
   char str3[22];
   scanf("%s %s",&str1,&str2);
    int str1len = strlen(str1);
    int str2len = strlen(str2);
    printf("%d %d\n",str1len,str2len);

    strcpy(str3,str1);
    strcat(str3,str2);
    printf("%s\n",str3);
    char temp=0;
    temp = str1[0];
    str1[0]=str2[0];
    str2[0]= temp;
    printf("%s %s",str1,str2);

    return 0;
}