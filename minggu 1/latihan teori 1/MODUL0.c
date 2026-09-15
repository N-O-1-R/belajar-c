#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;
    printf("sebelum: a = %d dan b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("setelah: a = %d dan b = %d\n", a, b);
    return 0;
}