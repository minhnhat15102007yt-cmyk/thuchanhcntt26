#include <stdio.h>

int laNguyenTo(int x) {
    if (x < 2) {
        return 0;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        int co[1001] = {0};

        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            co[x] = 1;
        }

        int dauTien = 1;

        for (int x = 2; x <= 1000; x++) {
            if (co[x] == 1 && laNguyenTo(x)) {
                if (dauTien == 0) {
                    printf(" ");
                }
                printf("%d", x);
                dauTien = 0;
            }
        }

        printf("\n");
    }

    return 0;
}