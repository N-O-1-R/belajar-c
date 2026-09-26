#include <stdio.h>

/*
for (inisialisasi; kondisi; peubah){
// body
}
soal: print angka 1 sd 10, secara ganti baris
*/

int main (){
    /*
    int i;

    for(i=1; i<=10; i++){
        printf("%d \n", i);
    }
    */

    /*
    1. inisialisasi i=1; --> hanya dieksekusi 1x saja
    2. cek kondisi apakah 1<=10 --> YA
    3. eksekusi body
    4. increment i++ --> i=2;
    5. cek kondisi apakah 2<=10 --> YA
    6. eksekusi body
    7. increment i++ --> i=2;
    8. dst

    sampai i=11
    11<=10 --> TIDAK --> STOP looping
    */

    // i hanya sebagai counter
    // untuk tampil memanfaatkan variabel "tampil"
    int i;
    int tampil = 1;

    for(i=0; i<10; i++){
        printf("%d \n", tampil++);
        //tampil++;
    }

    return 0;
}