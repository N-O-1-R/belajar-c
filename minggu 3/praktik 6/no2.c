#include <stdio.h>

int main (){

    int tes_akademik;
    int tes_keterampilan;
    int tes_psikologi;

    printf("Masukkan nilai tes akademik: ");
    scanf("%d", &tes_akademik); 
    printf("Masukkan nilai tes keterampilan: ");
    scanf("%d", &tes_keterampilan);
    printf("Masukkan nilai tes psikologi: ");
    scanf("%d", &tes_psikologi);

    printf("Rata-rata nilai anda: %d\n", (tes_akademik + tes_keterampilan + tes_psikologi) / 3);

    if ((tes_akademik + tes_keterampilan + tes_psikologi) / 3 >= 75) {
        if (tes_akademik > tes_keterampilan && tes_akademik > tes_psikologi) {
            printf("Diterima ditempatkan di bagian administrasi.\n");
        }
        else if (tes_keterampilan > tes_akademik && tes_keterampilan > tes_psikologi) {
            printf("Diterima ditempatkan di bagian produksi.\n");
        }
        else if (tes_psikologi > tes_akademik && tes_psikologi > tes_keterampilan) {
            printf("Diterima ditempatkan di bagian pemasaran.\n");
        }
    }
    else {
        printf("Maaf, anda tidak diterima.\n");
    }
    return 0;
}