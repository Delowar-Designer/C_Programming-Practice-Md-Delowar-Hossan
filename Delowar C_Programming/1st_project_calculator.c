/*#include<stdio.h>
int main()
{
    //calculater app in c
    int num1,num2;
    float result=0;
    char ch;//to store poerator
    //the user input
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the second number: \n");
    scanf("%d",&num2);
    printf("choose operation to perform(+,-,*,/,%)");
    scanf(" %c",&ch);
    swicth(ch)
    {
        case '+':
        result = num1+num2;
        break;
        case '-':
        result = num1-num2;
        break;
        case '*':
        result = num1*num2;
        break;
        case '/':
        result = (float)num1/(float)num2;
        break;
        case '%':
        result = num1%num2;
        break;
        default:
            printf("Invalid operation.\n");

    }
//to show the actuol result
    printf("The Result is: %d %c %d = %f\n",num1,ch,num2,result);

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    // Calculator app in C
    int num1, num2;
    float result = 0;
    char ch; // to store operator
    
    // User input
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);
    printf("Choose operation to perform (+, -, *, /, %%): ");
    scanf(" %c", &ch); // Added a space before %c to consume any whitespace
    
    // Using switch to perform the selected operation
    switch (ch)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) // Check for division by zero
                result = (float)num1 / num2;
            else
                printf("Division by zero is not allowed.\n");
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            printf("Invalid operation.\n");
            return 1; // Exiting the program with a non-zero status to indicate an error
    }

    // Display the actual result
    printf("The Result is: %d %c %d = %f\n", num1, ch, num2, result);

    return 0;
}*/

/*#include <stdio.h>

int main() 
{
    int num1, num2;
    char operator;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to handle whitespace
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    switch (operator) 
    {
        case '+':
            printf("Result: %d %c %d = %d\n", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d %c %d = %d\n", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d %c %d = %d\n", num1, operator, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) 
            {
                printf("Result: %d %c %d = %.2f\n", num1, operator, num2, (float)num1 / num2);
            } 
            else 
            {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    printf("প্রথম সংখ্যা প্রবেশ করান: ");
    scanf("%d", &num1);
    
    printf("একটি অপারেটর প্রবেশ করান (+, -, *, /): ");
    scanf(" %c", &operator); // স্পেস (%c) এই প্রথম শব্দের সাথে খালি স্থান নিবে
                            
    printf("দ্বিতীয় সংখ্যা প্রবেশ করান: ");
    scanf("%d", &num2);
    
    switch (operator) {
        case '+':
            printf("ফলাফল: %d %c %d = %d\n", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("ফলাফল: %d %c %d = %d\n", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("ফলাফল: %d %c %d = %d\n", num1, operator, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("ফলাফল: %d %c %d = %.2f\n", num1, operator, num2, (float)num1 / num2);
            } else {
                printf("ভাগ করা যাবে না।\n");
            }
            break;
        default:
            printf("অবৈধ অপারেটর।\n");
            break;
    }

    return 0;
}
*/
#include <stdio.h>
#include <math.h> // গণিতিক ফাংশনগুলি ব্যবহার করতে

int main() {
    double num1, num2, result;
    char operator;

    printf("সাইন্টিফিক ক্যালকুলেটর\n");
    printf("প্রথম সংখ্যা প্রবেশ করান: ");
    scanf("%lf", &num1);

    printf("অপারেটর প্রবেশ করান (+, -, *, /, ^): ");
    scanf(" %c", &operator);

    if (operator != '^') {
        printf("দ্বিতীয় সংখ্যা প্রবেশ করান: ");
        scanf("%lf", &num2);
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("ভাগ করা যাবে না\n");
                return 1;
            }
            break;
        case '^':
            printf("পাওয়ার প্রদান করান: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            break;
        default:
            printf("অবৈধ অপারেটর\n");
            return 1;
    }

    printf("ফলাফল: %lf %c %lf = %lf\n", num1, operator, num2, result);

    return 0;
}

