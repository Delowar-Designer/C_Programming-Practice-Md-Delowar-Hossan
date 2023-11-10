#include<stdio.h>
//pointer in c programming
//pointers in c language is a variabla which stores the address of another variable.
/*int main()
{
    int myVar = 50;
    //printf("%u",&myVar);
    //pointer
    int *p;
    p = &myVar;
    printf("the address of myVar is %x\n",&myVar);
    printf("the address of p is %x\n",p);
    printf("the value of p is %d\n",*p);
    return 0;
}*/
int main() {
    int num = 42; // একটি ইন্টিজার ভেরিয়েবল ডিক্লেয়ার এবং ইনিশিয়ালাইজ করা হল
    int *ptr; // একটি পোইন্টার ভেরিয়েবল ডিক্লেয়ার করা হল

    ptr = &num; // পোইন্টারটি এখন ভেরিয়েবল 'num' এর লোকেশনটি নির্দেশ করছে

    printf("Value of num: %d\n", num); // ভেরিয়েবল 'num' এর মান প্রিন্ট করা হল
    printf("Value at the memory location pointed by ptr: %d\n", *ptr); // পোইন্টার 'ptr' দ্বারা নির্দেশিত লোকেশনের মান প্রিন্ট করা হল

    return 0;
}
