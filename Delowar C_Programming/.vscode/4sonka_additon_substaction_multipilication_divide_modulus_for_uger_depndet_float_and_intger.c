#include <stdio.h>
#include <math.h>
int main()
{
    int int_num1, int_num2, int_num3, int_num4;
    float float_num1, float_num2, float_num3, float_num4;
    printf("Enter the first integer number: ");
    scanf("%d", &int_num1);
    printf("Enter the second integer number: ");
    scanf("%d", &int_num2);
    printf("Enter the third integer number: ");
    scanf("%d", &int_num3);
    printf("Enter the four integer number: ");
    scanf("%d", &int_num4);

    printf("Enter the first float number: ");
    scanf("%f", &float_num1);
    printf("Enter the second float number: ");
    scanf("%f", &float_num2);
    printf("Enter the third float number: ");
    scanf("%f", &float_num3);
    printf("Enter the four float number: ");
    scanf("%f", &float_num4);
    
    //printf("Saw your Anther Ansar");
    printf("sum of integers: %d\n", int_num1 + int_num2 + int_num3 + int_num4);
    printf("minus of integers: %d\n", int_num1 - int_num2 - int_num3 - int_num4);
    printf("multiplication of integers: %d\n", int_num1 * int_num2 * int_num3 * int_num4);
    printf("divide of integers: %d\n", int_num1 / int_num2 / int_num3 / int_num4);
    printf("modulvs of integers: %d\n", int_num1 % int_num2 % int_num3 % int_num4);
    
    printf("sum of float: %f\n", float_num1 + float_num2 + float_num3 + float_num4);
    printf("minus of float: %d\n", float_num1 - float_num2 - float_num3 - float_num4);
    printf("multiplication of float: %d\n", float_num1 * float_num2 * float_num3 * float_num4);
    printf("divide of float: %d\n", float_num1 / float_num2 / float_num3 / float_num4);
    printf("Calculate the modulus: %f\n", float_num1, float_num2, float_num3, float_num4);

    return 0;
}