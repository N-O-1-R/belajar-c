// Ulangilah soal nomor 2, 3 & 4 pada modul prakt String 1 dengan
// menggunakan fungsi-fungsi standard (built-in functions)

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char tujuan[100];

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    
    // Hapus karakter '\n' (enter) dari fgets
    str[strcspn(str, "\n")] = '\0';

    // Soal 2: Hitung panjang string
    printf("Panjang string: %zu\n", strlen(str));

    // Soal 4: Copy string ASLI dulu sebelum dibalik (Soal 3)
    strcpy(tujuan, str);
    printf("String tujuan (copy): %s\n", tujuan);

    // Soal 3: Balik string
    strrev(str);
    printf("String setelah dibalik: %s\n", str);

    return 0;
}