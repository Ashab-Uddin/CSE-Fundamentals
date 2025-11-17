#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    long long int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    printf("%lld\n",llabs(sum));
    return 0;
}