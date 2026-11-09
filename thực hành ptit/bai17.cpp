#include <stdio.h>

void solve(int test_id) {
    int n, m;
    if (scanf("%d%d", &n, &m) != 2) return;
    
    long long a[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
        }
    }
    
    long long res[50][50] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                res[i][j] += a[i][k] * a[j][k];
            }
        }
    }
    
    printf("Test %d:\n", test_id);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", res[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            solve(i);
        }
    }
    return 0;
}