/*Work in Relational Operator >, >=, <, <=, ==
countrol statement  --- conditional statement and loop control statement
conditional control statement, if-else, switch*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer : ");
    scanf("%d", &num);
    
    if(num%2==0)
        printf("Your Namber is Even\n");
    //if (num%2!=0)
    else
        printf("Your Namber is Odd\n");
    
    return 0;
}
