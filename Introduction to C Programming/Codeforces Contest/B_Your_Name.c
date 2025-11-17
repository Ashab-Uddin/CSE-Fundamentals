#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char strs[25], tstr[25];
        scanf("%s %s", strs, tstr);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strs[i] > strs[j])
                {
                    char temp = strs[i];
                    strs[i] = strs[j];
                    strs[j] = temp;
                }
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (tstr[i] > tstr[j])
                {
                    char temp = tstr[i];
                    tstr[i] = tstr[j];
                    tstr[j] = temp;
                }
            }
        }

        if (strcmp(strs, tstr) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
