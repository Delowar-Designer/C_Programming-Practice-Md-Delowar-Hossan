#include<stdio.h>
int main()
{
    int num1;
    float num2;
    printf("Enater an intager and float number : ");
    scanf("%d %f", &num1, &num2);
    /*float num1, num2;
    printf("Enter two integer : ");
    scanf("%d %d",&num1,&num2);
    printf("Enter tow float numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Numbers are  : %.1f  %1.f\n", num1, num2);*/
    printf("Numbers are : %d %.1f\n", num1, num2);

    return 0;
}