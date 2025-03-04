#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(a, b) (rand() % (b - a + 1) + a)
int main() {
    srand((int) time(0));
    int a = random(1, 10);
    int c, b = 1;
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &c);
        if (c != a) {
            b++;
            printf("Wrong guess!\n");
        }
        else {
            printf("Correct guess!\n");
            break;
        }
    }
    printf("Number of guesses: %d\n", b);
    return 0;
}
