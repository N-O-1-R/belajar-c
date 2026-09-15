#include <stdio.h>

int main (){

    int pilihan_hari;
    
    printf("Masukkan pilihan hari (1-7): ");
    scanf("%d", &pilihan_hari);

    switch (pilihan_hari) {
        case 1:
            printf("Hari minggu\n");
            break;
        case 2:
            printf("Hari senin\n");
            break;
        case 3:
            printf("Hari selasa\n");
            break;
        case 4:
            printf("Hari rabu\n");
            break;
        case 5:
            printf("Hari kamis\n");
            break;
        case 6:
            printf("Hari jumat\n");
            break;
        case 7:
            printf("Hari sabtu\n");
            break;
        default:
            printf("Pilihan hari tidak valid.\n");
    }

    return 0;
}