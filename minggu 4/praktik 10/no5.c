#include <stdio.h>
#include <stdlib.h>

int main (){

    char karakter;
    int jumlah_karakter = 0;
    int jumlah_spasi = 0;

    printf("Masukkan kalimat (tekan ENTER untuk selesai):\n");

    while(1){
        karakter = getchar();
        if(karakter == '\n'){
            break;
        }
        jumlah_karakter++;
        if(karakter == ' '){
            jumlah_spasi++;
        }
    }

    printf("Jumlah karakter = %d\n", jumlah_karakter);
    printf("Jumlah spasi = %d\n", jumlah_spasi);

    return 0;
}