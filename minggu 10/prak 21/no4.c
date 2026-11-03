// a. Definisikanlah sebuah fungsi untuk meng-copy string dengan menjadikan string
// asal dan string tujuan menjadi parameter fungsi tsb (misalnya : copystr())
// b. Pada fungsi main() terimalah input string yang akan di-copy. Selanjutnya
// panggil fungsi copystr()untuk mengcopy string asal ke string tujuan,
// tampilkan hasilnya berupa kedua string (asal dan tujuan) di main().

#include <stdio.h>
void copystr(char asal[], char tujuan[]) {
    int i = 0;
    while (asal[i] != '\0') {
        tujuan[i] = asal[i];
        i++;
    }
    tujuan[i] = '\0'; // Menambahkan karakter null di akhir string tujuan
}

int main() {
    char asal[100], tujuan[100];
    printf("Masukkan string asal: ");
    fgets(asal, sizeof(asal), stdin);
    
    copystr(asal, tujuan);
    
    printf("String asal: %s", asal);
    printf("String tujuan: %s", tujuan);
    
    return 0;
}