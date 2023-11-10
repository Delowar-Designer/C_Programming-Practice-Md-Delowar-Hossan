#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;

    printf("int : %lu \n", sizeof(int));
    printf("float : %lu \n", sizeof(float));

    printf("num : %lu \n", sizeof(num));
    printf("pi : %lu \n", sizeof(pi));

    return 0;
}
