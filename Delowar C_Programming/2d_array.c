/*#include<stdio.h>
// 2D Array in c programming

int main()
{
    int array[4][3] = {
        {1,2,3},//0
        {2,3,4},//1
        {3,4,5},//2
        {4,5,6}//3
    };
    //print last array last value
    printf("%d",array[3][2]);
    return 0;
}*/
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // একটি 2D অ্যারে ডিক্লেয়ার করা
    int matrix[rows][cols];

    // ম্যাট্রিক্স এর মান প্রদান করা
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // ম্যাট্রিক্স প্রিন্ট করা
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
