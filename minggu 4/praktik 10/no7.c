// Seorang mau menabung untuk pembiayaan ibadah hajinya. Biaya ibadah haji saat
// ini senilai a juta. Jika tiap bulan dia mampu menabung sebesar b rupiah. Dengan
// program anda yang menggunakan fungsi, bantulah orang ini untuk menghitung
// berapa bulan dia butuhkan agar biaya hajinya bisa terpenuhi. Yang menjadikan
// masalah ini tidak dapat diselesaikan dengan pembagian langsung a/b adalah bahwa
// setiap tahun biaya haji naik rata-rata c% dari biaya awal (a). Nilai a, b, c
// dimasukkan oleh user.
// contoh input dan output program:
// masukkan berapa biaya awal : 25000000
// berapa cicilan yang mampu dibayarkan tiap bulan : 500000
// berapa rata rata kenaikan biaya haji tiap tahun (%) : 4
// waktu yang dibutuhkan untuk menabung biaya haji adalah 58 bulan

#include <stdio.h>
#include <stdlib.h>

int main (){

    int biaya_awal, cicilan, kenaikan;
    printf("Masukkan berapa biaya awal: ");
    scanf("%d", &biaya_awal);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan: ");
    scanf("%d", &cicilan);
    printf("Berapa rata-rata kenaikan biaya haji tiap tahun (%%): ");
    scanf("%d", &kenaikan);

    int total_biaya = biaya_awal;
    int bulan = 0;

    while (total_biaya > 0) {
        total_biaya -= cicilan;
        bulan++;
        if (bulan % 12 == 0) {
            total_biaya += (total_biaya * kenaikan) / 100; // Kenaikan biaya setiap tahun
        }
    }

    printf("Waktu yang dibutuhkan untuk menabung biaya haji adalah %d bulan\n", bulan);

    return 0;
}