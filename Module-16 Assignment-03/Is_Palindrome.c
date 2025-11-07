#include <stdio.h>
#include <string.h>

int is_palindrome(char S[]) {
    int i = 0, j = strlen(S) - 1;

    while (i < j) {
        if (S[i] != S[j]) {
            return 0;  
        }
        i++;
        j--;
    }

    return 1; 
}

int main() {
    char S[1001];
    scanf("%s", S);

    if (is_palindrome(S))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}