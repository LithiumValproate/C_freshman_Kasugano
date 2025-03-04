#include <stdio.h>
int func(int d) {
    int n = 0;
    if (d == 1)
        return 1;
    n = (func(d - 1) + 1) * 2;
    return n;
}
int main() {
    int d, n;
    scanf("%d", &d);
    n = func(d);
    printf("%d", n);
    return 0;
}