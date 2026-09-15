#include <stdio.h>

int main(){

    // no 2
    // buat program Buat program untuk menginputkan sebuah bilangan, kemudian cetak ke layar bilangan
    // tersebut dan beri komentar apakah bilangan tersebut ganjil atau genap.
    // Contoh input = 15
    // Output = Bilangan yang diinputkan adalah 15.
    // Bilangan tersebut adalah bilangan ganjil.

    int a;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &a);

    printf("Bilangan yang diinputkan adalah %d.\n", a);

    if (a % 2 == 0) {
        printf("Bilangan tersebut adalah bilangan genap.\n");
    }
    else {
        printf("Bilangan tersebut adalah bilangan ganjil.\n");
    }

    return 0;
}