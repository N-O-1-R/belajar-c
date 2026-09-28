#include <stdio.h>
#include <stdlib.h>

// Buatlah program untuk menghitung jumlah angka dari suatu bilangan.
// Contohnya : Jumlah angka dari bilangan 3255 = 3 + 2 + 5 + 5 = 15
// Jumlah angka dari bilangan 4589 = 4 + 5 + 8 + 9 = 26
// dan sebagainya.

int main (){

    int bilangan;
    int jumlah = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    int temp = bilangan; // Simpan nilai asli bilangan untuk ditampilkan nanti

    while (bilangan != 0) {
        jumlah += bilangan % 10; // Ambil digit terakhir dan tambahkan ke jumlah
        bilangan /= 10;          // Hapus digit terakhir dari bilangan
    }

    printf("Jumlah angka dari bilangan %d = %d\n", temp, jumlah);

    return 0;
}