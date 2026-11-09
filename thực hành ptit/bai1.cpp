#include <stdio.h>

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    int a[100]; // Theo đề bài n không quá 100
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Kiểm tra mảng đối xứng
    int is_symmetric = 1; // Giả sử mảng đối xứng
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            is_symmetric = 0; // Không đối xứng
            break;
        }
    }
    
    if (is_symmetric) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
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