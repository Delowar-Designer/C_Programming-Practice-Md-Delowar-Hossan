//area = 3.1416 * radius * radius

#include<stdio.h>
int main()

{
    float radius, area, PI = 3.1416;
    printf("Enadr Radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of circle = %.2f\n",area);

    return 0;
    }