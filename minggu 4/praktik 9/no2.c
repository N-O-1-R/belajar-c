#include <stdio.h>
#include <stdlib.h>

int main (){

    int input;
    int total = 0;
    printf("input angka: ");
    scanf("%d", &input);

    printf("input: %d\n", input);
    printf("output: ");

    for(int i = input; i >= 1; i--){
        total += i;
        printf("%d ", i);
        if (i > 1) {
            printf("+ ");
        }
    }
    printf("= %d\n", total);


    return 0;
}