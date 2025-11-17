#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int min = a[0], max = a[0];
    int minp = 0, maxp = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minp = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxp = i;
        }
    }

    int temp = a[minp];
    a[minp] = a[maxp];
    a[maxp] = temp;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
