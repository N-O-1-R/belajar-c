// a. Copy-lah program dari soal no 2. Definisikanlah sebuah fungsi untuk membalik
// string yang menjadi parameternya (misalnya : balikstr())
// b. Pada fungsi main() terimalah input string yang akan dihitung panjang
// karakternya dan dibalik. Selanjutnya panggil fungsi pjgstr() dan

// 104
// balikstr()untuk mendapatkan kebalikan dari string input dan tampilkan
// hasilnya di main()

#include <stdio.h>

int pjgstr(char str[]) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

void balikstr(char str[]) {
    int panjang = pjgstr(str);
    for (int i = 0; i < panjang / 2; i++) {
        char temp = str[i];
        str[i] = str[panjang - 1 - i];
        str[panjang - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    
    int panjang = pjgstr(str);
    printf("Panjang string: %d\n", panjang - 1); // Mengurangi 1 untuk mengabaikan karakter pindah baris "\n"
    
    balikstr(str);
    printf("String setelah dibalik: %s\n", str);
    
    return 0;
}