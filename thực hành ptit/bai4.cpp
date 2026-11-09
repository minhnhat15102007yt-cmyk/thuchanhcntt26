#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[100];
    int chan[100], le[100];
    int count_chan = 0, count_le = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            chan[count_chan++] = a[i];
        } else {
            le[count_le++] = a[i];
        }
    }
    
    for (int i = 0; i < count_chan; i++) {
        printf("%d ", chan[i]);
    }
    printf("\n");
    
    for (int i = 0; i < count_le; i++) {
        printf("%d ", le[i]);
    }
    printf("\n");
    
    return 0;
}