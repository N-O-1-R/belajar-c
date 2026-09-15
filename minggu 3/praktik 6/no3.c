#include <stdio.h>

int main () {

    float bilangan_pertama;
    float bilangan_kedua;
    
    int pilihan;
    
    float hasil_jumlah;
    float hasil_kurang;
    float hasil_kali;
    float hasil_bagi;

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bilangan_pertama);
    
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bilangan_kedua);
    
    printf("Menu Matematika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        hasil_jumlah = bilangan_pertama + bilangan_kedua;
        if(hasil_jumlah == (int)hasil_jumlah) {
            printf("Hasil penjumlahan: %.0f\n", hasil_jumlah);
        } else {
            printf("Hasil penjumlahan: %.3f\n", hasil_jumlah);
        }
    }
    else if (pilihan == 2) {
        hasil_kurang = bilangan_pertama - bilangan_kedua;
        if(hasil_kurang == (int)hasil_kurang) {
            printf("Hasil pengurangan: %.0f\n", hasil_kurang);
        } else {
            printf("Hasil pengurangan: %.3f\n", hasil_kurang);
        }
    }
    else if (pilihan == 3) {
        hasil_kali = bilangan_pertama * bilangan_kedua;
        if(hasil_kali == (int)hasil_kali) {
            printf("Hasil perkalian: %.0f\n", hasil_kali);
        } else {
            printf("Hasil perkalian: %.3f\n", hasil_kali);
        }
    }
    else if (pilihan == 4) {
        if (bilangan_kedua == 0) {
            printf("Error: division by zero\n");
        } else {
            hasil_bagi = bilangan_pertama / bilangan_kedua;
            if(hasil_bagi == (int)hasil_bagi) {
                printf("Hasil pembagian: %.0f\n", hasil_bagi);
            } else {
                printf("Hasil pembagian: %.3f\n", hasil_bagi);
            }
        }
    }
    else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}