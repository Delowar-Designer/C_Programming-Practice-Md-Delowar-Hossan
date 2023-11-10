/*>, >==, <, <==, ==, !=
contol statment - conditonal control statment, loop control statement
conditonal control statement - if-eles, switch*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num%3==0)
        printf("Even\n");
    //if(num%2!=0)
    else
        printf("Odd\n");


    return 0;
}