#include <stdio.h>

int main(){ 
// no 3
    float celcius;
    float fahrenheit;
    
    printf("Masukkan suhu Celcius: ");
    scanf("%f", &celcius);
    
    fahrenheit = celcius * 1.8 + 32;

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;

}