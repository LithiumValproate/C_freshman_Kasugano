#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand((unsigned int) time(NULL)); // 使用时间种子初始化随机数生成器
    int num_offenders, caught = 0;
    printf("Enter the number of traffic offenders: ");
    scanf("%d", &num_offenders);
    printf("Enter the license plate numbers of the offenders:\n");
    for (int i = 0; i < num_offenders; ++i) {
        int plate_number;
        scanf("%d", &plate_number);
        int random_number = rand(); // 生成随机数
        if (random_number % 10 == 0) {
            printf("Offender with license plate number %d caught!\n", plate_number);
            caught++;
        }
        else {
            printf("No offender caught for license plate number %d\n", plate_number);
        }
    }
    printf("\nTotal offenders caught: %d\n", caught);
    return 0;
}
