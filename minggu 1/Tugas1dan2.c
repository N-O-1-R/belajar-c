#include <stdio.h>

int main(){

    //latihan 1
    //soal no 1
    printf("The black dog was big. ");

    //soal no 2
    printf("The cow jumped over the moon.\n");

    //latihan 2 soal no 3
    float celcius;
    float fahrenheit;

    printf("Masukkan suhu Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);


    return 0;

}