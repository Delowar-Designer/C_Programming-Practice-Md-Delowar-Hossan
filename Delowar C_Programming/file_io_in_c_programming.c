#include<stdio.h>
//File IO in c programming
int main()
{
    char line[255];
    FILE *fpointer = fopen("student.txt","r");


    fgets(line,255,fpointer);//access the 1st line
    fgets(line,255,fpointer);
    fgets(line,255,fpointer);
    fgets(line,255,fpointer);
    fgets(line,255,fpointer);
    fclose(fpointer);
    printf("%s",line);

    return 0;
}