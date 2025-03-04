#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateUniqueNumber() {
    int number;
    srand((unsigned int) time(NULL));
    do {
        number = rand() % 9000 + 1000;
        int digits[10] = {0};
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            if (digits[digit] != 0) {
                number = 0;
                break;
            }
            digits[digit]++;
            temp /= 10;
        }
    } while (number == 0);
    return number;
}
void compareNumbers(int target, int guess, int* A, int* B) {
    *A = 0;
    *B = 0;
    int digits_target[4], digits_guess[4];
    for (int i = 0; i < 4; i++) {
        digits_target[i] = target % 10;
        digits_guess[i] = guess % 10;
        target /= 10;
        guess /= 10;
    }
    for (int i = 0; i < 4; i++) {
        if (digits_guess[i] == digits_target[i]) {
            (*A)++;
        }
        else {
            for (int j = 0; j < 4; j++) {
                if (digits_guess[i] == digits_target[j]) {
                    (*B)++;
                    break;
                }
            }
        }
    }
}
int main() {
    int target = generateUniqueNumber();
    int guess, attempts;
    printf("Enter the number of attempts you want: ");
    scanf("%d", &attempts);
    printf("Welcome to the guessing game!\n");
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess (4-digit number with distinct digits): ", i);
        scanf("%d", &guess);
        int A, B;
        compareNumbers(target, guess, &A, &B);
        printf("%dA%dB\n", A, B);
        if (A == 4) {
            printf("Congratulations! You've guessed the number correctly!\n");
            break;
        }
        if (i == attempts) {
            printf("Sorry, you didn't guess the correct number. The correct number is %d\n", target);
        }
    }
    return 0;
}