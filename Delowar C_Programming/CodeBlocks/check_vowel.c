//Enter a letter to check vowel of consonant
/*#include<stdio.h>
int main()
{

    char ch;
    printf("Enter a letter : ");
    scanf("%c",ch);

    if (ch=='a')
        printf("Vowel");
    
    else if (ch=='e')
        printf("Vowel");
    
    else if (ch=='i')
        printf("Vowel");
    
    else if (ch=='o')
        printf("Vowel");
    
    else if (ch=='u')
        printf("Vowel");

    else 
        printf("Consonant");

return 0;
    
}*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a letter : ");
    scanf(" %c", &ch); // Notice the space before %c to consume any leading whitespace characters.

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
