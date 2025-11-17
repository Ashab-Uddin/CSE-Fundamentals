#include <stdio.h>

long long int calcu(long long int m, long long int a, long long int b, long long int c)
{
    long long int mul = a * b * c;

    if (m % mul != 0)
    {
        return -1;
    }

    return m / mul;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long r = calcu(m, a, b, c);
        printf("%lld\n", r);
    }

    return 0;
}
