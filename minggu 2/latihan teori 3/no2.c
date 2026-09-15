#include <stdio.h>

int main(){

    //teori 3 soal 2
    //dengan menggunakan if else dan operator logika or buat program untuk mendefinisikan sebuah karakter yang diinputkan adalah vokal atau konsonan

    char karakter;

    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &karakter);    

    if (karakter == 'a' || karakter == 'A' ||
        karakter == 'e' || karakter == 'E' ||
        karakter == 'i' || karakter == 'I' ||
        karakter == 'o' || karakter == 'O' ||
        karakter == 'u' || karakter == 'U') {
        printf("Karakter '%c' adalah huruf vokal.\n", karakter);
    }
        else if( karakter >= 'a' && karakter <= 'z' ||
                 karakter >= 'A' && karakter <= 'Z') {
                 printf("Karakter '%c' adalah huruf konsonan.\n", karakter);
        }
    else {
        printf("'%c' bukan huruf.\n", karakter);
    }

    return 0;

}