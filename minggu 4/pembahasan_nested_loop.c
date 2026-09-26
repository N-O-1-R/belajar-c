#include <stdio.h>
#include <stdlib.h>

int main (){

// print angka 1 ganti baris 22 ganti baris 333 ganti baris 4444 ganti baris 55555 ganti baris
// output:
// 1
// 22
// 333
// 4444
// 55555

    int i, j;

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
