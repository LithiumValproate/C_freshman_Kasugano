#include <stdio.h>
int main() {
    int p, y;
    float r;
    printf("Please enter principal amount, interest rate, and deposit period: ");
    scanf("%d %f %d", &p, &r, &y);
    float ans;
    if (y <= 2)
        ans = p * (1 + r / 100);
    else
        ans = p * (1 + r / 100) * (1 + r * 100);
    printf("The deposit is %.2f yuan", ans);
    return 0;
}
