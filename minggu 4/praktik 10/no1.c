#include <stdio.h>
#include <stdlib.h>

int main (){

    char huruf = 'A';

    while (huruf != 'X'){
        printf("Masukkan huruf: ");
        scanf(" %c", &huruf);
        printf("Input: %c\n", huruf);
    }

    printf("Program selesai.\n");

    return 0;
}