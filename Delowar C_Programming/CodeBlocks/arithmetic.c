//write a protram that takes two integer and display sum
#include<stdio.h>
int main()
{
    /*int num1, num2, sum;
    float avg;
    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("The sum is = %d\n",sum);

    avg = (float)sum/2; //type casti
    printf("The average is = %.2f\n",avg);*/
    
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("The sum is = %d\n",result);

    result = num1 - num2;
    printf("The sub is = %d\n",result);
    
    result = num1 * num2;
    printf("The Mul is = %d\n",result);

    result = num1 / num2;
    printf("The Div is = %d\n",result);

    result = num1 % num2;
    printf("The Remainder is = %d\n",result);

    return 0;
}