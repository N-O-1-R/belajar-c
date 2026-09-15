#include <stdio.h>

int main(){

    //teori 3 soal 3
    //buat program menggunakan pernyataan if adalah untuk menentukan besarnya potongan harga
    //yang diterima oleh seorang pembeli berdasarkan kriteria:
    //jika pembelian < 100.000 maka tidak ada potongan harga
    //jika pembelian >= 100.000 potongan yang diterima sebesar 5% dari total pembelian

    float pembelian;
    float diskon = 0.05;

    printf("Masukkan total pembelian: ");
    scanf("%f", &pembelian);

    if (pembelian < 100000) {
        printf("Tidak ada potongan harga.\n");
        printf("Total yang harus dibayar: %.2f\n", pembelian);
    } 
    else {
        float potongan = pembelian * diskon;
        float total_bayar = pembelian - potongan;
        printf("Potongan harga: %.2f\n", potongan);
        printf("Total yang harus dibayar: %.2f\n", total_bayar);
    }

    return 0;

}