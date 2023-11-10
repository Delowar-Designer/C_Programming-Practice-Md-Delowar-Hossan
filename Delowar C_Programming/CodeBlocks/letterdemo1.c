#include<stdio.h>
int main()
{
    /*char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c", &lower); //a=97
    printf("The uppercase letter : %c", lower-32);//a=97-32=A=65*/

    char upper;
    printf("Enter any Uppercase letter : ");
    scanf("%c", &upper); //A=65
    printf("The lowercase letter : %c\n", upper+32);//A=65+32=a=97
    return 0;
}