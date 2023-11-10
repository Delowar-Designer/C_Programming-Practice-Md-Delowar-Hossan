//area of rectangle = langth * width
#include<stdio.h>
int main()

{
    float langt, width, area;
    
    printf("Enter Langt = ");
    scanf("%f", &langt);
    
    printf("Enter width = ");
    scanf("%f", &width);

    area = langt * width;
    printf("Area of rectangle = %.2f\n", area);

    return 0;
}