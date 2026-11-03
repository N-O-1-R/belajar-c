/*
 * SOAL PRAKTIKUM:
 * 
 * Diberikan data nilai mahasiswa sebagai berikut:
 * +-----+----------+--------+------------+---------+
 * | No. | Nama Mhs | BAHASA | MATEMATIKA | DIGITAL |
 * +-----+----------+--------+------------+---------+
 * | 1.  | Ahmad    |   81   |     90     |   62    |
 * | 2.  | Adang    |   50   |     83     |   87    |
 * | 3.  | Dani     |   89   |     55     |   65    |
 * | 4.  | Edi      |   77   |     70     |   92    |
 * +-----+----------+--------+------------+---------+
 * 
 * Buatlah program untuk menampilkan laporan sebagai berikut:
 * 
 * No. Mhs    Rata-rata
 * ---------------------
 * 1          77.67
 * 2          73.33
 * 3          69.67
 * 4          79.67
 * 
 * Petunjuk: Gunakan variabel array dua dimensi untuk menyimpan data.
 */

#include <stdio.h>

int main() {
    // Data nilai mahasiswa
    int nilai[4][3] = {
        {81, 90, 62}, // Ahmad
        {50, 83, 87}, // Adang
        {89, 55, 65}, // Dani
        {77, 70, 92}  // Edi
    };

    printf("No. Mhs    Rata-rata\n");
    printf("---------------------\n");

    for (int i = 0; i < 4; i++) {
        float rata_rata = (nilai[i][0] + nilai[i][1] + nilai[i][2]) / 3.0;
        printf("%d          %.2f\n", i + 1, rata_rata);
    }
    
    printf("---------------------\n");

    return 0;
}

