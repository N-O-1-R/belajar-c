#include <stdio.h>

int main (){
    int a = 12, b = 2, c = 3, d = 4;
    
    printf("Hasil dari a %% b = %d\n", a % b);
    printf("Hasil dari a - c = %d\n", a - c);
    printf("Hasil dari a + b = %d\n", a + b);
    printf("Hasil dari a / d = %d\n", a / d);
    printf("Hasil dari a / d * d + a %% d = %d\n", a / d * d + a % d);
    printf("Hasil dari a %% d / d * a - c = %d\n", a % d / d * a - c);

    return 0;
}