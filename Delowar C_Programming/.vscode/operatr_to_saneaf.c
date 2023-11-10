/*#include <stdio.h>
/*int main()
{
	int a;
	int	b;
	
	printf("enter the value of a: \n");
	scanf("%d",&a);
	
	printf("enter the value of b: \n");
	scanf("%d",&b);
	
	int result = a+=b;
	printf("the result is:	%d",result);
	
	return 0;
}*/
/*int main() 
{
    int x = 5;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf("Enter another number: ");
    int y;
    scanf("%d", &y); 
    
    x <<= y; // x = x + y; +=,  =, -=, *=, /=, %=, <<=, >>=, &= , |=, ^= 
    
    printf("Sum of the two numbers: %d\n", x);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int x = 10;
    printf("Enter a number to subtract: ");
    int num;
    scanf("%d", &num); // ইনপুট রিড
    x -= num; // x = x - num;
    printf("Updated x: %d\n", x);
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // ইনপুট রিড
    if (x != 10) { // সমানতা তুলনা ==: সমান !=: সমান নয় <: ক্ষুদ্র >: বড় <=: ক্ষুদ্র অথবা সমান >=: বড় অথবা সমান
        printf("Match found!\n");
    } else {
        printf("No match!\n");
    }
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y); // দুটি সংখ্যা ইনপুট রিড
    if (x > 0 && y > 0) { // উভয় শর্ত পরীক্ষা &&: এবং (লজিকাল এন্ড) ||: অথবা (লজিকাল অর)!: নয় (নাই)
        printf("Both conditions are true!\n");
    } else {
        printf("At least one condition is false!\n");
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y); // দুটি সংখ্যা ইনপুট রিড
    int result = x & y; // বাইটওয়াইজ এন্ড অপারেশন&: বিটউইজ এন্ড
                               /*|: বিটউইজ অর ^: বিটউইজ এক্সক্লুসিভ অর (XOR)
                                <<: বিটউইজ বামভাগ স্থানান্তর >>: বিটউইজ ডানভাগ স্থানান্তর*/
    printf("Bitwise AND Result: %d\n", result);
    return 0;
}


