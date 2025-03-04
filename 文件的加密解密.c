#include <stdio.h>
void encryptDecrypt(FILE* in_file, FILE* out_file) {
    int key = 123;
    char ch;
    while ((ch = fgetc(in_file)) != EOF) {
        char encrypted = ch ^ key;
        fputc(encrypted, out_file);
    }
}
int main() {
    FILE* in_file, * encrypted_file, * decrypted_file;
    in_file = fopen("input.txt", "r");
    if (in_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    encrypted_file = fopen("encrypted.txt", "w");
    if (encrypted_file == NULL) {
        printf("Error opening encrypted file.\n");
        return 1;
    }
    encryptDecrypt(in_file, encrypted_file);
    fclose(in_file);
    fclose(encrypted_file);
    encrypted_file = fopen("encrypted.txt", "r");
    if (encrypted_file == NULL) {
        printf("Error opening encrypted file.\n");
        return 1;
    }
    decrypted_file = fopen("decrypted.txt", "w");
    if (decrypted_file == NULL) {
        printf("Error opening decrypted file.\n");
        return 1;
    }
    encryptDecrypt(encrypted_file, decrypted_file);
    fclose(encrypted_file);
    fclose(decrypted_file);
    printf("Encryption and decryption done successfully.\n");
    return 0;
}