#include <stdio.h>
int main() {
    int a;
    printf("Please enter your annual income: ");
    scanf("%d", &a);
    float c;
    if (a <= 36000)
        c = 0;
    else if (a > 36000 && a <= 144000)
        c = (a - 36000) * 0.3;
    else if (a > 144000 && a <= 300000)
        c = 12000 + (a - 144000) * 0.2;
    else if (a > 300000 && a <= 420000)
        c = 26000 + (a - 300000) * 0.25;
    else if (a > 420000 && a <= 660000)
        c = 44000 + (a - 420000) * 0.3;
    else if (a > 660000 && a <= 960000)
        c = 71000 + (a - 660000) * 0.35;
    else
        c = 151050 + (a - 960000) * 0.45;
    printf("Your tax fee is %.2f yuan\n", c);
    return 0;
}
