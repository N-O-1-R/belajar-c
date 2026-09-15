#include <stdio.h>

int main(){

    int bil1;
    int bil2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    if (bil2 == 0) {
        printf("Error: division by zero\n");
    }
    else {
        float hasil = (float)bil1 / bil2;
        printf("Hasil bagi %d / %d: %.3f\n", bil1, bil2, hasil);
    } 

    return 0;
}