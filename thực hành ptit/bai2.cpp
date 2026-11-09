#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    if (n == 1 || n == 2) {
        printf("1\n");
        return;
    }
    
    long long f1 = 1, f2 = 1, fn = 0;
    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    printf("%lld\n", fn);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}