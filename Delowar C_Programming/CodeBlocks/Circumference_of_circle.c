#include <stdio.h>

int main() {
    double radius, circumference;

    // বৃত্তের ব্যাসার্ধ (radius) ইনপুট নেওয়া
    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);

    // বৃত্তের পরিধি (circumference) নির্ণয়
    circumference = 2 * 3.14159265359 * radius;

    // পরিধি প্রিন্ট করা
    printf("Circumference of circle = %.2lf\n", circumference);

    return 0;
}
