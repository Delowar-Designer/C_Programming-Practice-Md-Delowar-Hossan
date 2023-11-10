#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    sum = num1+num2+num3, avg =(float)sum/3;
    //avg = (float)sum/3;

    printf("sum = %d\nAverage = %.2f\n",sum,avg);
    //printf("Average = %.2f\n",avg);

    return 0;
}