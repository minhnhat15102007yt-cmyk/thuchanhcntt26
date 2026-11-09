#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d%d", &n, &m) != 2) return 0;
    
    long long a[50][50];
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
            sum += a[i][j];
        }
    }
    
    long long avg = sum / (n * m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > avg) {
                a[i][j] = 0;
            }
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
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}