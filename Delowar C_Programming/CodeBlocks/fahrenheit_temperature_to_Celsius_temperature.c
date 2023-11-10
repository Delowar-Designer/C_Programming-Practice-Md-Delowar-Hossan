//Fahrenheit temperature to Celsius temperature
#include<stdio.h>
int main()
{
    float Cent,F;
    printf("Enter Centigrade : ");
    scanf("%f",&Cent);

    F = (Cent * 1.8) + 32;
    
    printf("Farn = %.2f\n",F);

    return 0;

}