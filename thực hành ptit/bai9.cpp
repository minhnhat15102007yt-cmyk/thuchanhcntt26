#include <stdio.h>

int main(void) {
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;

        printf("Buoc %d:", i + 1);
        for (int k = 0; k < n; k++) {
            printf(" %d", a[k]);
        }
        printf("\n");
    }

    return 0;
}