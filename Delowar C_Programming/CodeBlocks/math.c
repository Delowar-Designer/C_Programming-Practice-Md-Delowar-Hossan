/*#include<stdio.h>
#include<math.h>

int main()
{
    double x = 10.5;
    double result = log(x);
    //math.h Its more functions log(), log10(), exp(), sin(), cos(), tan(), round(), trunc(), ceil(), floor()
    
    printf("log(%lf)=%lf\n",x,result);

    return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    printf("Enter a number: ");
    scanf("%lf", &x);

    result = log(x); // Calculate the natural logarithm of x
    //math.h Its more functions log(), log10(), exp(), sin(), cos(), tan()
    printf("log(%lf) = %lf\n", x, result);

    return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main() {
    double angle = 30; // কোণ ডিগ্রীতে
    double radians = angle * (M_PI / 180.0); // কোণ রেডিয়ানে পরিণত করা
    double sin_result = sin(radians);
    double cos_result = cos(radians);
    double tan_result = tan(radians);

    printf("sin(%lf) = %lf\n", angle, sin_result);
    printf("cos(%lf) = %lf\n", angle, cos_result);
    printf("tan(%lf) = %lf\n", angle, tan_result);

    return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
    double angle_degrees;
    double radians, sin_result, cos_result, tan_result;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    radians = angle_degrees * (M_PI / 180.0); // Convert angle to radians
    sin_result = sin(radians);
    cos_result = cos(radians);
    tan_result = tan(radians);

    printf("sin(%lf) = %lf\n", angle_degrees, sin_result);
    printf("cos(%lf) = %lf\n", angle_degrees, cos_result);
    printf("tan(%lf) = %lf\n", angle_degrees, tan_result);

    return 0;
}
