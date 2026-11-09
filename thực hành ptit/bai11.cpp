#include <stdio.h>

int main(void) {
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int doiCho = 0;

        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                doiCho = 1;
            }
        }

        if (doiCho == 0) {
            break;
        }

        printf("Buoc %d:", i + 1);
        for (int k = 0; k < n; k++) {
            printf(" %d", a[k]);
        }
        printf("\n");
    }

    return 0;
}