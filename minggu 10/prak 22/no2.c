// a. Definisikanlah sebuah fungsi untuk membandingkan dua buah string yang
// menjadi parameternya secara CASE SENSITIVE (misalnya :
// bandingstr1())
// b. Pada fungsi main() terimalah input 2 buah string yang akan
// dibandingkan. Selanjutnya panggil fungsi bandingstr1() untuk
// membandingkan kedua string tsb dan tampilkan hasilnya di main()

#include <stdio.h>
int bandingstr1(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
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
    
    
    if (bandingstr1(str1, str2)) {
        printf("Kedua string sama.\n");
    } else {
        printf("Kedua string tidak sama.\n");
    }
    
    return 0;
}
