#include <stdio.h>
float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float mul(float a, float b) {
    return a * b;
}
float div(float a, float b) {
    return a / b;
}
int main() {
    char ch;
    float a, b;
    printf("Enter the symbol and numbers to operate\n");
    scanf("%c %f %f", &ch, &a, &b);
    switch (ch) {
        case '+':
            printf("%f", add(a, b));
            break;
        case '-':
            printf("%f", sub(a, b));
            break;
        case '*':
            printf("%f", mul(a, b));
            break;
        case '/':
            if (b == 0)
                printf("Error");
            else
                printf("%f", div(a, b));
            break;
        default:
            printf("Error");
    }
    return 0;
}
