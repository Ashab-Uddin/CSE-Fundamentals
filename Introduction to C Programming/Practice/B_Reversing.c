#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            int l = 0, j = i - 1;
            while (l < j) {
                int temp = a[l];
                a[l] = a[j];
                a[j] = temp;
                l++;
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
