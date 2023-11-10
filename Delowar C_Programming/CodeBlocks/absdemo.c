/*#include<stdio.h>
int main()

{
    int result = abs(-7);
    printf("%d",result);

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h> // Include the stdlib.h header for the abs function

int main() 
{
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result = abs(num); // Calculate the absolute value

    printf("The absolute value is: %d\n", result);

    return 0;
}
