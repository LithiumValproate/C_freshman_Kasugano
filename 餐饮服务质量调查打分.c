#include <stdio.h>
int trans(char a, int sum) {
    switch (a) {
        case 'A':
            sum += 1;
            break;
        case 'B':
            sum += 2;
            break;
        case 'C':
            sum += 3;
            break;
        case 'D':
            sum += 4;
            break;
        default:
            printf("Please re-enter.\n");
    }
    return sum;
}
int main() {
    int sum = 0;
    char a[5];
    printf("Was the taste of the dish satisfactory?");
    scanf(" %c", &a[0]);
    sum = trans(a[0], sum);
    printf("Was the restaurant ambiance comfortable?");
    scanf(" %c", &a[1]);
    sum = trans(a[1], sum);
    printf("Was the service friendly?");
    scanf(" %c", &a[2]);
    sum = trans(a[2], sum);
    printf("Was the price reasonable?");
    scanf(" %c", &a[3]);
    sum = trans(a[3], sum);
    printf("Would you recommend it to a friend?");
    scanf(" %c", &a[4]);
    sum = trans(a[4], sum);
    printf("%d", sum);
    return 0;
}