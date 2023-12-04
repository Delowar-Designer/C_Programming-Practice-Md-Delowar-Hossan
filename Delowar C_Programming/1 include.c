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
