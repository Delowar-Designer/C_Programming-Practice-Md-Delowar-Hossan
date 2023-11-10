#include <stdio.h>
int main()
{
    float num1,num2;
    

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the Sangent number ");
    scanf("%f", &num2);
    //sum = num1 + num2;
    float addition = num1 + num2;
    float substaction = num1 - num2;
    float multipilication = num1 * num2;
    float divide = num1 / num2;
    float modulus = num1 % num2;
    //display the value
    printf("The addition of num1 and num2 is : %.2f\n",addition);
    printf("The substaction of num1 and num2 is: %.2f\n",substaction);
    printf("The multipilication of num1 and num2 is: %.2f\n", multipilication);
    printf("The divide of num1 and num2 is: %.2f\n", divide);
    printf("The modulus of num1 and num2 is: %f\n", modulus);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
   
    return 0;
}