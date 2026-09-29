#include <stdio.h>
#include <stdlib.h>

int main (){

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