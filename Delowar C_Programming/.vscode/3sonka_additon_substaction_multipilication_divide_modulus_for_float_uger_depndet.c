#include <stdio.h>
int main()
{
float num1, num2, num3, addition;
printf("Enter the first addition number 1 : ");
scanf("%f", &num1);
printf("Enter the first addition number 2 : ");
scanf("%f", &num2);
printf("Enter the first addition number 3 : ");
scanf("%f", &num3);
addition = num1 + num2 + num3;
printf("The addition of 3 Number :%.2f\n", addition);
float substaction;
printf("Enter the first substaction number 1 : ");
scanf("%f", &num1);
printf("Enter the first substaction number 2 : ");
scanf("%f", &num2);
printf("Enter the first substaction number 3 : ");
scanf("%f", &num3);
substaction = num1 - num2 - num3;
printf("The addition of 3 Number :%.2f\n", substaction);
float multipilication;
printf("Enter the first multipilication number 1 : ");
scanf("%f", &num1);
printf("Enter the first multipilication number 2 : ");
scanf("%f", &num2);
printf("Enter the first multipilication number 3 : ");
scanf("%f", &num3);
multipilication = num1 * num2 * num3;
printf("The addition of 3 Number :%.2f\n", multipilication);
float divide;
printf("Enter the first divide number 1 : ");
scanf("%f", &num1);
printf("Enter the first divide number 2 : ");
scanf("%f", &num2);
printf("Enter the first divide number 3 : ");
scanf("%f", &num3);
divide = num1 / num2 / num3;
printf("The addition of 3 Number :%.2f\n", divide);

/*float modulus;
printf("Enter the first modulus number 1 : ");
scanf("%f", &num1);
printf("Enter the first modulus number 2 : ");
scanf("%f", &num2);
printf("Enter the first modulus number 3 : ");
scanf("%f", &num3);
//modulus = num1, num2, num3;
printf("The modulus of 3 Number :%.2f\n", fmodf(num1, num2,num3));*/

return 0;
}