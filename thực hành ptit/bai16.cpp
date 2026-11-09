#include <stdio.h>

int main() {
    int n, m, p;
    if (scanf("%d%d%d", &n, &m, &p) != 3) return 0;
    
    long long a[50][50], b[50][50], res[50][50] = {0};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%lld", &b[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%lld ", res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}