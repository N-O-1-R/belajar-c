#include <stdio.h>
#include <stdlib.h>

int main (){

    int n;
    printf("Masukkan banyak data: ");
    scanf("%d", &n);

    printf("Input: %d\n", n);
    printf("Output: ");

    for(int i = 1; i <= n; i++){
        printf("%d ", (2*i)-1);
    }

    return 0;
}