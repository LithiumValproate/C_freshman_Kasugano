#include <stdio.h>
int main() {
    int a;
    printf("请输入数字：");
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("一");
            break;
        case 2:
            printf("二");
            break;
        case 3:
            printf("三");
            break;
        case 4:
            printf("四");
            break;
        case 5:
            printf("五");
            break;
        case 6:
            printf("六");
            break;
        case 7:
            printf("七");
            break;
        case 8:
            printf("八");
            break;
        case 9:
            printf("九");
            break;
        default:
            printf("错误");
    }
    return 0;
}
