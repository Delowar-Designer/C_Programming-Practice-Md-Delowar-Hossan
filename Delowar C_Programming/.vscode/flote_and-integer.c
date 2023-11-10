/*#include <stdio.h>

int main() {
    int int_num;
    float float_num;
    //printf("a = ");
    scanf("%d, %f", &int_num, &float_num);
    printf("int %d\n", int_num);
    printf("float %f\n", float_num);
    
    return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3, num4;
    float num5, num6, num7, num8;

    printf("Enter the first integer and float number: ");
    scanf("%d, %f", &num1, &num5);
    printf("Enter the second integer and float number: ");
    scanf("%d, %f", &num2, &num6);
    printf("Enter the third integer and float number: ");
    scanf("%d, %f", &num3, &num7);
    printf("Enter the fourth integer and float number: ");
    scanf("%d, %f", &num4, &num8);
    
    printf("sum of integers: %d\n", num1 + num2 + num3 + num4);
    printf("minus of integers: %d\n", num1 - num2 - num3 - num4);
    printf("multiplication of integers: %d\n", num1 * num2 * num3 * num4);
    printf("divide of integers: %d\n", num1 / num2 / num3 / num4);
    printf("modulus of integers: %d\n", num1 % num2 % num3 % num4);
    
    printf("sum of float: %.2f\n", num5 + num6 + num7 + num8);
    printf("minus of float: %.2f\n", num5 - num6 - num7 - num8);
    printf("multiplication of float: %.2f\n", num5 * num6 * num7 * num8);
    printf("divide of float: %.2f\n", num5 / num6 / num7 / num8);
    printf("Calculate the modulus: %.2f\n", num5, num6, num7, num8);

    return 0;
}


