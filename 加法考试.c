#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand((unsigned int) time(NULL));
    int a, b, ans;
    while (1) {
        a = rand() % 20 + 1;
        b = rand() % 20 + 1;
        printf("a = %d, b = %d\n", a, b);
        printf("Addition is ");
        scanf("%d", &ans);
        if (ans == a + b)
            printf("Correct!\n");
        else
            printf("Wrong.\n");
    }
}