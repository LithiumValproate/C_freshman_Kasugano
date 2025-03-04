#include <stdio.h>
int main() {
    FILE* in_file, * out_file;
    char ch;
    in_file = fopen("input.txt", "r");
    if (in_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    out_file = fopen("output.txt", "w");
    if (out_file == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }
    while ((ch = fgetc(in_file)) != EOF) {
        fputc(ch, out_file);
    }
    fclose(in_file);
    fclose(out_file);
    printf("File copied successfully.\n");
    return 0;
}