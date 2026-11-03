// Lakukan percobaan untuk menginputkan string dari keyboard dengan
// menggunakan : scanf(), gets() dan fgets(). Analisislah dan berikan
// kesimpulan untuk setiap fungsi tsb.

#include <stdio.h>
int main() {
    char str1[50], str2[50], str3[50];

    // Menggunakan scanf()
    printf("Masukkan string menggunakan scanf(): ");
    scanf("%s", str1);
    printf("String yang dimasukkan: %s\n", str1);

    // // Menggunakan gets()
    // // printf("Masukkan string menggunakan gets(): ");
    // // gets(str2);
    // // printf("String yang dimasukkan: %s\n", str2);

    // // Menggunakan fgets()
    // printf("Masukkan string menggunakan fgets(): ");
    // fgets(str3, sizeof(str3), stdin);
    // printf("String yang dimasukkan: %s\n", str3);

    return 0;
}