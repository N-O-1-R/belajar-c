#include <stdio.h>

int main(){

//latihan toeri 3

//teori 3 soal 1
//buat program untuk menginputkan sebuah bilangan, kemudian cetak ke layar bilangan tersebut dan beri komentar ganjil atau genap

    int bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("Bilangan %d adalah genap.\n", bilangan);
    } 
    else {
        printf("Bilangan %d adalah ganjil.\n", bilangan);
    }

    return 0;
    
}
