#include <stdio.h>

int main() {
    int n, term = 1, ratio = 2;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= ratio;
    }
    printf("\n");
    return 0;
}
