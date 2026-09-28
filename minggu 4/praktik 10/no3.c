#include <stdio.h>
#include <stdlib.h>

// Pada program no 2 tambahkan rata-rata, maksimum dan minimum dari angka yang
// dimasukkan.
// Contoh dari input di atas tambahan outputnya adalah sebagai berikut:
// Rata-rata : 4
// Maksimum : 5
// Minimum : 3

int main (){

    int total = 0;
    int bilangan;
    char lagi = 'y';
    int i = 1;
    int max = -2147483648; // Nilai minimum untuk integer
    int min = 2147483647;  // Nilai maksimum untuk integer

    while (lagi == 'y'){
        printf("Masukkan bilangan ke-%d : ", i);
        scanf("%d", &bilangan);
        total += bilangan;

        if (bilangan > max) {
            max = bilangan;
        }
        if (bilangan < min) {
            min = bilangan;
        }

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &lagi);
        i++;
    }

    double rata_rata = (double)total / (i - 1);

    printf("Total bilangan = %d\n", total);
    printf("Rata-rata: %.2f\n", rata_rata);
    printf("Maksimum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}