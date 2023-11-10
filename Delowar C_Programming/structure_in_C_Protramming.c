#include<stdio.h>
struct student_data
{
    int Id;
    int Marks;
    char fav_char;
};
int main()
{
    //program to store tudents data
    struct student_data Mitu,Delowar,Joti,Majdur;
    
    //store first student information
    Mitu.fav_char = 'A';
    Mitu.Id = 1;
    Mitu.Marks = 85;

    //store last student information
    Delowar.fav_char = 'B';
    Delowar.Id = 2;
    Delowar.Marks = 90;

    //print first student information
    printf("Mitu\n");
    printf("First student id is %d\n",Mitu.Id);
    printf("Frist student marks is %d\n",Mitu.Marks);
    printf("First student fav_character is %c\n",Mitu.fav_char);
    printf("\n");

    //print lost student information
    printf("Delowar\n");
    printf("Second student id is %d\n",Delowar.Id);
    printf("Second student marks is %d\n",Delowar.Marks);
    printf("Second student fav_character is %c\n",Delowar.fav_char);
    printf("\n");

    return 0;
}
