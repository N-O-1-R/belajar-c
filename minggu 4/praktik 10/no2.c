#include <stdio.h>
#include <stdlib.h>

int main (){

    // Gunakan loop while untuk membuat program yang dapat mencari total angka yang
// dimasukkan dengan tampilan sebagai berikut :
// Masukkan bilangan ke-1 : 5
// Mau memasukkan data lagi [y/t] ? y
// Masukkan bilangan ke-2 : 3
// Mau memasukkan data lagi [y/t] ? t
// Total bilangan = 8

    int total = 0;
    int bilangan;
    char lagi = 'y';
    int i = 1;

    while (lagi == 'y'){
        printf("Masukkan bilangan ke-%d : ", i);
        scanf("%d", &bilangan);
        total += bilangan;
        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &lagi);
        i++;
    }

    printf("Total bilangan = %d\n", total);

    return 0;
}