#include <stdio.h>
#include <stdlib.h>

int main (){

    int n;
    printf("Masukkan banyak data: ");
    scanf("%d", &n);
    printf("Input: %d\n", n);
    printf("Output: ");

    int total = 0;
    for(int i = 0; i < n; i++){
        total += i;
        printf("%d ", total);
    }
    
    printf("\n");

    return 0;
}