#include <stdio.h>

int main() {
    int n, term = 1;
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2; // 
    }
    printf("\n");
    return 0;
}
