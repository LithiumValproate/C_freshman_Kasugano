#include <stdio.h>

//一维数组 和函数综合练习

void sameElements();
void sort(int arr[], int size);
void length();
void strCompare();
void addr();
void trans();

int main() {
    int num;
    while (1) {
        printf("************************ 一维数组 和函数综合练习 ************************************* \n");
        printf("************************ 1.检查数组是否存在重复元素 ********************************** \n");
        printf("************************ 2.计算字符串长度 ******************************************** \n");
        printf("************************ 3.比较两个字符串是否相等 ************************************ \n");
        printf("************************ 4.查找字符串中首次出现指定字符的位置 ************************ \n");
        printf("************************ 5.将字符串中的大写字母转换为小写字母 ************************ \n");
        printf("************************ 6.退出程序 ************************ \n");
        printf("输入想要实现的功能: \n");
        scanf("%d", &num);
        switch (num) {
            case 1:
                sameElements();
                break;
            case 2:
                length();
                break;
            case 3:
                strCompare();
                break;
            case 4:
                addr();
                break;
            case 5:
                trans();
                break;
            default:
                printf("退出程序\n");
                break;
        }
        if (num == 6) {
            break;
        }
    }
}

void sameElements() {
    FILE* fp;
    fp = fopen("arr.txt", "r");
    int arr[100] = {0}, count = 0;
    for (int i = 0; i < 100; i++) {
        fscanf(fp, "%d", &arr[i]);
        if (arr[i] != 0)
            count++;
    }
    sort(arr, count);
    for (int i = 0; i < 99; i++) {
        if (arr[i] != 0 && arr[i] == arr[i + 1]) {
            printf("存在");
            break;
        }
    }

}

void length() {
    FILE* fp;
    fp = fopen("str.txt", "r");
    char str[100] = {"0"};
    fgets(str, 100, fp);
    int count = 0;
    for (int i = 0; i < 100; i++) {
        count++;
        if (str[i] == 0)
            break;
    }
    printf("%d", count);
}

void strCompare() {
    FILE* fp;
    fp = fopen("strC.txt", "r");
    char str1[100] = {0}, str2[100] = {0};
    fscanf(fp, "%s", str1);
    fscanf(fp, "%s", str2);
    for (int i = 0; i < 100; i++) {
        if (str1[i] != str2[i]) {
            printf("不等");
            return;
        }
    }
    printf("相等");
}

void addr() {
    FILE* fp;
    fp = fopen("strA.txt", "r");
    char str[100] = {0};
    fscanf(fp, "%s", str);
    char search;
    scanf("%s", &search);
    for (int i = 0; i < 100; i++) {
        if (str[i] == search) {
            printf("%d", i+1);
            break;
        }
    }
}

void trans() {
    FILE* fp;
    fp = fopen("strT.txt", "r");
    char str[100];
    fscanf(fp, "%s", str);
    for (int i = 0; i < 100; i++) {
        if (str[i] <= 90 && str[i] >= 65)
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}