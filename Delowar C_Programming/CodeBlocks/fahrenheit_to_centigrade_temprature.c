//Temperatures on the Fahrenheit scale are Centigrade temperatures

#include<stdio.h>
int main()

{
    float C, F;
   
    printf("Enter Fahrenheit: ");
    scanf("%f", &F);
    
    C = (F-23)/1.8;
    printf("Centigrade : %.2f\n",C);
    
    return 0;
}