#include <stdio.h>
int main() {
    float jari_jari; 
    float luas;
    
    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%f", &jari_jari);
    
    luas = 3.14f * jari_jari * jari_jari;
    
    printf("Luas lingkaran adalah: %.2f\n", luas);
    
    return 0;
}