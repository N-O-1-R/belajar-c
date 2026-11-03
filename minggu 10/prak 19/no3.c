// 3. Buat program untuk menampilkan tabel berikut ini dengan menggunakan looping for() dan 2 buah array:
//    - x[] sebagai array berdimensi satu yang diinisialisasi dengan sudut 0 s/d 360
//    - data[] sebagai array berdimensi dua. data adalah array yg berisi nilai sin, cos, dan tan dari masing-masing nilai sudut yang ada dalam array x.

// +-----+--------+--------+--------+
// |  x  | Sin(x) | Cos(x) | Tan(x) |
// +-----+--------+--------+--------+
// |  0  |        |        |        |
// | 30  |        |        |        |
// | 60  |        |        |        |
// | 90  |        |        |        |
// | 120 |        |        |        |
// | 150 |        |        |        |
// | 180 |        |        |        |
// | 210 |        |        |        |
// | 240 |        |        |        |
// | 270 |        |        |        |
// | 300 |        |        |        |
// | 330 |        |        |        |
// | 360 |        |        |        |
// +-----+--------+--------+--------+

// Petunjuk:
// - gunakan fungsi radian() untuk mengkonversi nilai derajat menjadi radian.
//   rad = drjt / 180.0 * PI.
//   PI = 3.14159

#include <stdio.h>
#include <math.h>

int main() {
    int x[] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
    double data[13][3];

    printf("+-----+--------+--------+--------+\n");
    printf("|  x  | Sin(x) | Cos(x) | Tan(x) |\n");
    printf("+-----+--------+--------+--------+\n");

    for (int i = 0; i < 13; i++) {
        double rad = x[i] / 180.0 * M_PI;
        data[i][0] = sin(rad);
        data[i][1] = cos(rad);


        if (x[i] == 90 || x[i] == 270) {
            data[i][2] = INFINITY;
            

            printf("| %3d | %6.4f | %6.4f |   -INF    |\n", x[i], data[i][0], data[i][1]);
        } else {
            data[i][2] = tan(rad);
            printf("| %3d | %6.4f | %6.4f | %6.4f |\n", x[i], data[i][0], data[i][1], data[i][2]);
        }
    }

    printf("+-----+--------+--------+--------+\n");

    return 0;
}