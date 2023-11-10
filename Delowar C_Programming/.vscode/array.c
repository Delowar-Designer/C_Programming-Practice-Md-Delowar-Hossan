#include <stdio.h>
int main()

    //aray in c
    //syntax
    //data_type araay_name[array_size];
    //int marks[5];//array declaration
    //initidize
    /*marks[0] = 80;
    marks[1] = 70;
    marks[2] = 60;
    marks[3] = 50;
    marks[4] = 40;*/

    //int marks[5] = {80, 70, 60, 50, 50};
    //print the first element of the array
    //printf("The first Element is: %d",marks[4]);
    //update the element on the array
    //marks[3] = 95;
    //printf("Updated aray: %d", marks[3]);

{
    // Declare an array of integers with a size of 5
    /*int numbers[5];
    
    // Initialize array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    
    // Access and print array elements
    printf("Element 0: %d\n", numbers[0]);
    printf("Element 1: %d\n", numbers[1]);
    printf("Element 2: %d\n", numbers[2]);
    printf("Element 3: %d\n", numbers[3]);
    printf("Element 4: %d\n", numbers[4]);*/
    

    /*int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array with the specified size
    int numbers[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the array elements
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    return 0;*/

    
    int marks[5];

    printf("Enter 5 marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Entered marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Mark %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
