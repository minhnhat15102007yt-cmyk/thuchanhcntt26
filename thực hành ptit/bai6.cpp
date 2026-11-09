#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n, a[100];
        int daDem[100] = {0};

        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        printf("Test %d:\n", test);

        for (int i = 0; i < n; i++) {
            if (daDem[i] == 1) {
                continue;
            }

            int dem = 1;

            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    dem++;
                    daDem[j] = 1;
                }
            }

            printf("%d xuat hien %d lan\n", a[i], dem);
        }
    }

    return 0;
}