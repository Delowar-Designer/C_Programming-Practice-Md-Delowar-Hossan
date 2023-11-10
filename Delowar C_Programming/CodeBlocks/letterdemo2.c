#include<stdio.h>
int main()

{
    /*char lower,upper;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("Uppercase letter = %c",upper);*/

    char lower,upper;
    printf("Enter any Uppercase letter : ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Lowercase letter = %c",lower);
    return 0;
}