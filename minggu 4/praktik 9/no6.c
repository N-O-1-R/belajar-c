#include <stdio.h>
#include <stdlib.h>

int main (){

// Dengan menggunakan looping dan switch case atau else if buatlah program dalam C
// untuk menghitung Indeks Prestasi Semester seorang mahasiswa, dimana yang
// diinputkan adalah nilai huruf dari 5 mata kuliah yang diikutinya dan jumlah jam mata
// kuliah tsb.
// Dimana konversi nilai huruf ke angka untuk menghitung IPS adalah sebagai berikut:
// A -> 4, B->3, C->2, D->1, E->0 dan rumus IPS = jumlah (nilai * jam)/jumlah jam
// keseluruhan
// Contoh :
// Input :
// Nilai Mata Kuliah 1 : A jumlah jam : 2
// Nilai Mata Kuliah 2 : C jumlah jam : 2
// Nilai Mata Kuliah 3 : B jumlah jam : 3
// Nilai Mata Kuliah 4 : A jumlah jam : 3
// Nilai Mata Kuliah 5 : C jumlah jam : 3
// Output:
// Indeks Prestasi Semester : 3
// Output di atas didapatkan dari : (4*2 + 2*2 + 3*3 + 4*3 + 2*3)/(2+2+3+3+3) = 39/13

    char nilai;
    int jam;
    int total_nilai = 0;
    int total_jam = 0;

    for(int i = 1; i <= 5; i++){
        printf("Nilai Mata Kuliah %d: ", i);
        scanf(" %c", &nilai);
        printf("Jumlah jam: ");
        scanf("%d", &jam);

        switch(nilai){
            case 'A':
                total_nilai += 4 * jam;
                break;
            case 'B':
                total_nilai += 3 * jam;
                break;
            case 'C':
                total_nilai += 2 * jam;
                break;
            case 'D':
                total_nilai += 1 * jam;
                break;
            case 'E':
                total_nilai += 0 * jam;
                break;
            default:
                printf("Nilai tidak valid\n");
                i--;
                continue;
        }

        total_jam += jam;
    }

    if(total_jam > 0){
        printf("Indeks Prestasi Semester: %.2f\n", (float)total_nilai / total_jam);
    } else {
        printf("Tidak ada data yang valid.\n");
    }

    return 0;
}