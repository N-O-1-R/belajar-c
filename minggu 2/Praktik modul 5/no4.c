#include <stdio.h>

int main () {
    int bilangan_pertama;
    int bilangan_kedua;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan_pertama);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan_kedua);

    if (bilangan_pertama % bilangan_kedua == 0){
        printf("%d adalah kelipatan persekutuan %d.\n", bilangan_pertama, bilangan_kedua);
    }
    else {
        printf("%d bukan kelipatan persekutuan %d.\n", bilangan_pertama, bilangan_kedua);
    }
    return 0;
}