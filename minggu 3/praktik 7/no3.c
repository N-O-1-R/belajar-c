#include <stdio.h>

int main(){

    int valid_operator = 1;
    char operator;

    float sisi_kubus, jarijari_lingkaran, tinggi_silinder, hasil;

    printf("Masukkan operator : \n");
    printf("1. Volume Kubus\n");
    printf("2. Volume Lingkaran\n");
    printf("3. Volume Silinder\n");
    scanf("%c", &operator);

    switch (operator) {
        case '1':
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi_kubus);
            hasil = sisi_kubus * sisi_kubus * sisi_kubus;
            printf("Volume Kubus: %.2f\n", hasil);
            break;
        case '2':
            printf("Masukkan jari-jari lingkaran: ");
            scanf("%f", &jarijari_lingkaran);
            hasil = 3.14 * jarijari_lingkaran * jarijari_lingkaran;
            printf("Volume Lingkaran: %.2f\n", hasil);
            break;
        case '3':
            printf("Masukkan jari-jari silinder: ");
            scanf("%f", &jarijari_lingkaran);
            printf("Masukkan tinggi silinder: ");
            scanf("%f", &tinggi_silinder);
            hasil = 3.14 * jarijari_lingkaran * jarijari_lingkaran * tinggi_silinder;
            printf("Volume Silinder: %.2f\n", hasil);
            break;
        default:
            valid_operator = 0;
    }

    switch (valid_operator) {
        case 1:
            printf("Hasil perhitungan: %.2f\n", hasil);
            break;
        default:
            printf("Operator tidak valid.\n");
    }


    return 0;
}