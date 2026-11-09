#include <stdio.h>

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    int a[100]; // N không quá 100
    int max_val = -1; // Các số trong dãy đều nguyên dương
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    
    // Dòng thứ nhất: in ra giá trị lớn nhất
    printf("%d\n", max_val);
    
    // Dòng thứ hai: in ra các vị trí (chỉ số) có giá trị lớn nhất, cách nhau một khoảng trắng
    for (int i = 0; i < n; i++) {
        if (a[i] == max_val) {
            printf("%d ", i);
        }
    }
    printf("\n");
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