#include <stdio.h>
#include <stdlib.h>

int main (){

    // 5. Gunakan loop for untuk mendefinisikan apakah sebuah bilangan adalah bilangan pima
// atau bukan
// input : 27
// output : Bilangan adalah bilangan prima
// dan jika 1 atau dibawahnya maka output : Bilangan adalah 1 atau dibawahnya

    int input;
    int i;
    printf("masukkan angka: ");
    scanf("%d", &input);
    printf("input: %d\n", input);
    printf("output: ");

    if (input <=1){
        printf("Bilangan adalah 1 atau dibawahnya\n");
    }

    else{
        for(i = 2; i <= input; i++ ){   
            if (input % i == 0 && i != input) {
                printf("Bilangan bukan bilangan prima\n");
                break;
            } else if (i == input) {
                printf("Bilangan adalah bilangan prima\n");
            }
        }
    }
    return 0;
}