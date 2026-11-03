// a. Definisikanlah sebuah fungsi untuk menghitung panjang dari string yang
// menjadi parameternya (misalnya : pjgstr())
// b. Pada fungsi main() terimalah input string yang akan dihitung panjang
// karakternya. Selanjutnya panggil fungsi pjgstr() untuk mendapatkan
// panjang string dan tampilkan hasilnya di main()

#include <stdio.h>
int pjgstr(char str[]) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int main() {
    char str[100];
    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    
    int panjang = pjgstr(str);
    printf("Panjang string: %d\n", panjang - 1); // Mengurangi 1 untuk mengabaikan karakter pindah baris "\n"
    
    return 0;
}