#include <stdio.h>

int main (){

    int suhu;

    printf("Masukkan suhu: ");
    scanf("%d", &suhu);
    printf("Suhu yang dimasukkan: %d\n", suhu);

    if (suhu < 0) {
        printf("Suhu kurang dari 0 derajat.\n"); 
        printf("Benda berbentuk padat.\n");
    }
        else if (suhu >= 0 && suhu < 100) {
                 printf("Suhu diantara 0 dan 100 derajat.\n");
                 printf("Benda berbentuk cair.\n");
        }

    else {
        printf("Suhu lebih dari 100 derajat.\n");
        printf("Benda berbentuk gas.\n");
    }

    return 0;
}