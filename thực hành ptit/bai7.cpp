#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void solve(int test_id) {
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Test %d:\n", test_id);
    
    int unique[100], count[100], num_unique = 0;
    
    for (int i = 0; i < n; i++) {
        if (is_prime(a[i])) {
            int found = -1;
            for (int j = 0; j < num_unique; j++) {
                if (unique[j] == a[i]) {
                    found = j;
                    break;
                }
            }
            if (found != -1) {
                count[found]++;
            } else {
                unique[num_unique] = a[i];
                count[num_unique] = 1;
                num_unique++;
            }
        }
    }
    
    for (int i = 0; i < num_unique - 1; i++) {
        for (int j = i + 1; j < num_unique; j++) {
            if (unique[i] > unique[j]) {
                int temp_val = unique[i];
                unique[i] = unique[j];
                unique[j] = temp_val;
                
                int temp_cnt = count[i];
                count[i] = count[j];
                count[j] = temp_cnt;
            }
        }
    }
    
    for (int i = 0; i < num_unique; i++) {
        printf("%d xuat hien %d lan\n", unique[i], count[i]);
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