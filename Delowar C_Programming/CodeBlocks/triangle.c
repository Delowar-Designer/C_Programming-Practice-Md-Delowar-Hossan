#include<stdio.h>
int main()

//write program that calcultes the area of a triangle

{
    float base,height,area;
    printf("Base = ");
    scanf("%f",&base);

    printf("Height = ");
    scanf("%f",&height);

    area = (float)0.5 * base * height;
    printf("Area = %.2f\n",area);

    return 0;
}