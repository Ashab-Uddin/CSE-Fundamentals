#include <stdio.h>
long long int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int mul = fact(n - 1);
    return mul*n;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int factResult = fact(n);
    printf("%lld",factResult);
    return 0;
}