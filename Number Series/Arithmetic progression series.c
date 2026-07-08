#include <stdio.h>

int main() {
    int n, start = 1, diff = 2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", start + (i * diff));
    }
    printf("\n");
    return 0;
}
