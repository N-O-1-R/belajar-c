#include <stdio.h>
#include <stdlib.h>

int main (){

//Gunakan loop for untuk membuat program sebagai berikut:
// input : n
// output : 1 3 4 5 ... m ( m = bilangan ganjil ke n)

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