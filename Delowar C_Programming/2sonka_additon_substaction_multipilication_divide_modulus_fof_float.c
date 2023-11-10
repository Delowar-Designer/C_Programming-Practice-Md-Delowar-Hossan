#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    //Displa
    printf("Additon: %f\n", num1 + num2);
    printf("Substaction: %f\n", num1 - num2);
    printf("Multipilication: %f\n", num1 * num2);
    printf("Divide: %f\n", num1 / num2);
    printf("Modulus: %f\n", fmodf(num1, num2));
    return 0;
    }