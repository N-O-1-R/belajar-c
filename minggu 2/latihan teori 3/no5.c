#include <stdio.h>

int main(){


    //teori 3 soal 5
    //gunakan pernyataan if else untuk membuat program yang menerima apakah sebuah tahun yang diinputkan
    //adalah tahun kabisat atau bukan.
    //tahun kabisat adalah tahun yang kelipatan 4, kelipatan 400, bukan kelipatan 100, atau kelipatan lainnya


    int tahun;

    printf("Masukkan sebuah tahun: ");
    scanf("%d", &tahun);

    if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0) {
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    } 
    else {
        printf("Tahun %d bukan tahun kabisat.\n", tahun);
    }


    return 0;
}