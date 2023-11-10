#include<stdio.h>
int main()
{
    /*int time=10;
    if(time == 10)
    {
        printf("God morning Delowr\n");
        printf("Engineer Md Delowar Hossan\n");
    }
    else
    {
        printf("Sorry Its not morning\n");
        printf("No Engineer Md Delowar Hossan\n");
    }*/

    int num1, num2;
    printf("Enter Firstt number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    if(num1>num2)
    printf("Large = %d\n",num1);

    else if(num1<num2)
    printf("Large = %d\n",num2);

    else
    printf("Numbers are equal");

    return 0;
}