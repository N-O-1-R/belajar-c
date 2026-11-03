// Lakukan percobaan untuk membandingkan 2 buah string dengan
// menggunakan fungsi strcmp() dan strcmpi(). Analisislah dan berikan
// kesimpulan tentang perbedaan dan contoh aplikasi untuk keduanya

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);

    // Menggunakan strcmp() untuk perbandingan case-sensitive
    int result_case_sensitive = strcmp(str1, str2);
    if (result_case_sensitive == 0) {
        printf("Kedua string sama (case-sensitive).\n");
    } else {
        printf("Kedua string tidak sama (case-sensitive).\n");
    }

    // Menggunakan strcasecmp() untuk perbandingan case-insensitive
    int result_case_insensitive = strcasecmp(str1, str2);
    if (result_case_insensitive == 0) {
        printf("Kedua string sama (case-insensitive).\n");
    } else {
        printf("Kedua string tidak sama (case-insensitive).\n");
    }

    return 0;
}