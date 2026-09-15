#include <stdio.h>

int main(){

    //teori 3 soal 4
    //gunakan pernyataan if else untuk membuat program yang menerima 2 buah bilangan bulat yang diinput.
    //tampilkan hasil dari pembagian bilangan pertama dengan bilangan kedua. demgan ketelitian 3 desimal
    //nilai tambah: program bisa mengecek pembagian dengan 0,
    //jika bil2 = 0 maka tampilkan pesan error "division by zero" dan tidak menampilkan hasil pembagian

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
        float hasil = (float) bil1 / bil2;
        printf("Hasil bagi %d dengan %d: %.3f\n", bil1, bil2, hasil);
    } 

    return 0;
}