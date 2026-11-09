#include <stdio.h>

int main(void) {
    int n, m, x;
    int A[1000] = {0};
    int B[1000] = {0};

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        A[x] = 1;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        B[x] = 1;
    }

    // Giao cua A va B
    for (int x = 1; x < 1000; x++) {
        if (A[x] == 1 && B[x] == 1) {
            printf("%d ", x);
        }
    }
    printf("\n");

    // Hieu A - B
    for (int x = 1; x < 1000; x++) {
        if (A[x] == 1 && B[x] == 0) {
            printf("%d ", x);
        }
    }
    printf("\n");

    // Hieu B - A
    for (int x = 1; x < 1000; x++) {
        if (B[x] == 1 && A[x] == 0) {
            printf("%d ", x);
        }
    }
    printf("\n");

    return 0;
}