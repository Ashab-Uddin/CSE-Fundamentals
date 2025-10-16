#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n == 0){
            printf("0");
        }
        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}