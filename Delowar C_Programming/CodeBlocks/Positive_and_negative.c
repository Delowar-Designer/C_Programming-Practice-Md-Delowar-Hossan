#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);

    if(num>0)
    printf("Postive");
    else if(num<0)
    printf("Negative");
    else
    printf("Zero");

    return 0;
}