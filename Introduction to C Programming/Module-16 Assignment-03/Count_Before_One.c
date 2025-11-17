#include <stdio.h>

int count_before_one(int A[], int N) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 1) {
            break;  
        }
        cnt++;
    }
    return cnt;
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int count = count_before_one(A, N);
    printf("%d\n", count);
    
    return 0;
}
