#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[100];
    int count[100] = {0};
    int printed[100] = {0};
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (!printed[a[i]]) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] == a[i]) {
                    cnt++;
                }
            }
            printf("%d %d\n", a[i], cnt);
            printed[a[i]] = 1;
        }
    }
    
    return 0;
}