#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int indx, value;
    scanf("%d %d", &indx, &value);

    for (int i = n; i >= indx; i--)
    {
        A[i] = A[i - 1];
    }
    A[indx] = value;
    for (int i = 0; i <=n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}