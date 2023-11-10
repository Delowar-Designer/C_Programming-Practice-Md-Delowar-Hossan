
/*program to calculate the total of three numbers and then
find the average of thre number
*/
/*#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int sum;
    float avg;
    printf("Enter the Three intger Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);//user input
    sum = num1 + num2 + num3;
    avg = sum/3;
    printf("The sum of three numbers is: %d\n", sum);
    printf("The average of sum is: %.2f\n", avg);
    return 0;
}*/
/*
Write a program to find the area of a circle 
by taking radius as input from the user
*/
/*#include <stdio.h>
int main()
{
    int radius;
    float area;
    float PI = 3.14;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    //logic
    //area = pi * radius * radius
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f",area);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int base;
    int height;
    float area;
    printf("Enter the base of triangle: ");
    scanf("%d",&base);
    printf("Enter the height of triangle: ");
    scanf("%d",&height);
    area = 0.5 * base * height;
    printf("The area of the triangle is: %.2f", area);
    return 0;
}