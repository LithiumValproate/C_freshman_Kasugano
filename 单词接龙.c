#include <stdio.h>
#include <string.h>
int main() {
    char words[10][20];
    int count;
    printf("Enter the number of words (max 10): ");
    scanf("%d", &count);
    printf("Enter %d words:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%s", words[i]);
    }
    printf("\nWord chain:\n");
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (i != j) {
                int len1 = strlen(words[i]);
                int len2 = strlen(words[j]);
                // 如果两个单词有包含关系
                if (strstr(words[j], words[i]) != NULL || strstr(words[i], words[j]) != NULL) {
                    printf("%s -> %s\n", words[i], words[j]);
                }
            }
        }
    }
    return 0;
}
