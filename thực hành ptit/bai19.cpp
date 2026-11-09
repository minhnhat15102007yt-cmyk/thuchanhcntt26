#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, m;
    if (scanf("%d%d", &n, &m) != 2) return 0;
    
    long long a[50][50];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
            if (is_prime(a[i][j])) {
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