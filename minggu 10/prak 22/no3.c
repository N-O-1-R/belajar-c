// a. Definisikanlah sebuah fungsi untuk membandingkan dua buah string yang
// menjadi parameternya secara NON CASE SENSITIVE (misalnya :
// bandingstr2())
// b. Pada fungsi main() terimalah input 2 buah string yang akan
// dibandingkan.. Selanjutnya panggil fungsi bandingstr2() untuk
// membandingkan kedua string tsb dan tampilkan hasilnya di main()
// Keterangan : lihat algoritma Fungsi Banding – NON CASE SENSITIVE

#include <stdio.h>
int bandingstr2(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = str1[i];
        char c2 = str2[i];

        // Ubah karakter menjadi huruf kecil jika merupakan huruf besar
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 += 'a' - 'A';
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 += 'a' - 'A';
        }

        if (c1 != c2) {
            return 0; // Tidak sama
        }
        i++;
    }
    return str1[i] == str2[i]; // Sama jika kedua string berakhir pada posisi yang sama
}

int main() {
    char str1[100], str2[100];
    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);
    
    if (bandingstr2(str1, str2)) {
        printf("Kedua string sama (case-insensitive).\n");
    } else {
        printf("Kedua string tidak sama (case-insensitive).\n");
    }
    
    return 0;
}