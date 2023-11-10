/*#include<stdio.h>
int main()
{
    //protram to checr whether a person is eligible to vote or not
    int age;
    printf("Enter yor Age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible for vote in Bangladese");
    }
        else{
        printf("sorry you are not eligible for vote in Bangladese");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    // Program to calculate the grade of the student according to the specified marks
    int marks;
    printf("Enter Your marks: ");
    scanf("%d", &marks);
    
    if(marks > 85 && marks <= 100)
    {
        printf("Your grade is A");
    }
    else if(marks > 60 && marks <= 85)
    {
        printf("Your grade is B+");
    }
    else if(marks > 40 && marks <= 60)
    {
        printf("Your grade is B");
    }
    else if(marks > 30 && marks <= 40)
    {
        printf("Your grade is C");
    }
    else
    {
        printf("Sorry, you have failed. Please visit the principal's office with your parents.");
    }
    
    return 0;
}
