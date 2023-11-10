/*An integer varibale num that will contain 10, 
write a program that prints an integer number
*/
#include<stdio.h>
int main()
/*{
    int num1=20,num2=30;

    printf("Number1 is %d\n",num1);
    printf("Nunber2 is %d\n",num2);
    printf("Numbers are %d,%d\n",num1,num2);
    return 0;
}
/*Write a program that prints a floating,
double number and character*/
/*{
    float num1 = 10.5;
    double num2 = 10.525555554;
    char ch = 'a';
    printf("num1 = %.1f\n",num1);
    printf("num2 = %lf\n",num2);
    printf("ch = %c\n",ch);
    return 0;
}*/
/*write aprogram that takes an integer 
and print that number*/
/*{
    int num1;
    printf("please enter an integer : ");
    scanf("%d",&num1);
    printf("You have pressed : %d\n",num1);
    return 0;
}*/
{
    int num1;
    float num2;
    double num3;
    char ch;

    printf("Please enter an integer Number:");
    scanf("%d",&num1);
    printf("You have pressed integer Number: %d\n", num1);

    printf("Please enter an float Number:");
    scanf("%f",&num2);
    printf("You have pressed float Number: %.1f\n", num2);

    printf("Please enter an double Number:");
    scanf("%lf",&num3);
    printf("You have pressed double Number: %lf\n", num3);

    printf("Please enter a char Number:");
    scanf(" %c", &ch);
    printf("You have entered a char Number: %c\n", ch);
    return 0;
}
