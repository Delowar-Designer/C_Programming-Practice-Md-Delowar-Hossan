#include<stdio.h>
int main()
{
    int marks=0;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 10:
        case 9:
        //marks beteen 90-100
        printf("\n your grade is: A");
        break;
        case 8:
        //marks beteen 80-89
        printf("\n your grade is: B");
        break;
        case 7:
        //marks beteen 70-79
        printf("\n your grade is: c");
        break;
        case 6:
        //marks beteen 60-69
        printf("\n your grade is: D");
        break;
        case 5:
        //marks beteen 50-59
        printf("\n your grade is: E");
        break;
        case 4:
        //marks beteen 40-49
        printf("\n your grade is: E--");
        break;
        default: 
        //marks less than 40
        printf("\n your grade is: F or Fail\n");
        }
        return 0;
}