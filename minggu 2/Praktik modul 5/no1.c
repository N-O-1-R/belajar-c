#include <stdio.h>

int main(){

    // praktik modul 5 no 1
    // buat program yang membaca nilai integer dan menuliskan
    // "Nilai a positif" jika a >= 0 dan
    // "Nilai a negatif" jika a < 0

    int a;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &a);

    if (a >= 0) {
        printf("Nilai %d positif.\n", a);
    } 
    else {
        printf("Nilai %d negatif.\n", a);
    }

    return 0;
}