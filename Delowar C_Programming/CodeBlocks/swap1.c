/*#include<stdio.h>
int main()

{
    int num1=10;
    int num2=5;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);

    return 0;

}*/

#include <stdio.h>

int main() 
{
    int num1, num2, temp;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    /*temp = num1;
    num1 = num2;
    num2 = temp;*/

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
