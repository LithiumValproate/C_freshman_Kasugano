#include <stdio.h>

void add(int[]);
void del(int[]);
void addS(int[]);

int main() {
    int a[10] = {1, 2, 3, 24, 32, 24, 4, 31};
    while (1) {
        printf("扣1添加元素在末尾\n");
        printf("扣2删除一个元素\n");
        printf("扣3选位置添加元素\n");
        printf("扣4退出");
        int s;
        scanf("%d", &s);
        switch (s) {
            case 1:
                add(a);
                break;
            case 2:
                del(a);
                break;
            case 3:
                addS(a);
                break;
            default:
                break;
        }
        if (s == 4)
            break;
    }
    return 0;
}

void add(int arr[]) {

}