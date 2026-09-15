#include <stdio.h>

int main(){

    float total_pembelian;
    float diskon = 0.05;
    
    printf("Masukkan total pembelian: ");
    scanf("%f", &total_pembelian);
    
    if (total_pembelian < 100000) {
        printf("Total pembelian adalah Rp. %.2f.\n", total_pembelian);
        printf("tidak ada potongan harga.\n");
    }
    else {
        float potongan_harga = total_pembelian * diskon;
        float total_bayar = total_pembelian - potongan_harga;
        printf("Total pembelian adalah Rp. %.2f.\n", total_pembelian);
        printf("Potongan harga yang diterima: Rp. %.2f.\n", potongan_harga);
        printf("Total yang harus dibayar: Rp. %.2f.\n", total_bayar);
    }
    return 0;
}