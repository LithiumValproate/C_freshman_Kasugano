#include <stdio.h>
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int arr[3];
    for (int i = 0; i < 3; ++i)
        scanf("%d", &arr[i]);
    sort(arr, 3);
    if (arr[0] + arr[1] <= arr[2])
        printf("Error.");
    else {
        if (arr[0] == arr[1] || arr[1] == arr[2]) {
            if (arr[0] == arr[2])
                printf("Equilateral triangle.");
            else
                printf("Isosceles triangle.");
        }
        else
            printf("Normal triangle");
    }
    return 0;
}