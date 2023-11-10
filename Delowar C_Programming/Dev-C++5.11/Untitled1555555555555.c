#include<stdio.h>
//File IO in c programming
int main()
{
    FILE *fpointer = fopen("student.txt","w");

    fclose(fpointer);


    return 0;
}
