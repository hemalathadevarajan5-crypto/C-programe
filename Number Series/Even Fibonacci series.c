#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);
    if(a % 2 == 0)
        printf("%d ", a);
    if(b % 2 == 0)
        printf("%d ", b);
    for(i = 3; i <= n; i++) {
        c = a + b;
        if(c % 2 == 0)
            printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
