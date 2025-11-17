#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min = a[i];
            m = i;
        }
    }
    int count;
    for (int i = 0; i < n; i++)
    {
        if(min == a[i]){
            count++;
        }
    }
    if(count%2 != 0){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }

    return 0;
}