#include <stdio.h>

int main(void) {
    int n, a[100], b[100];
    int m = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int daCo = 0;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                daCo = 1;
                break;
            }
        }

        if (daCo == 0) {
            b[m] = a[i];
            m++;
        }
    }

    for (int i = 0; i < m; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", b[i]);
    }
    printf("\n");

    return 0;
}