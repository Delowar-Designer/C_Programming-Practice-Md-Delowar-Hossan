#include<stdio.h>

//Guess The Number Game in c programming
int main()
{
    int myNum,userNum;
    myNum = 3;

    printf("I have a number in maind (0-9). can you guess it?\n");

    printf("Enter your Guess:");
    scanf("%d",&userNum);

    if(myNum == userNum){
        printf("Yes you got it!");
    }else if(myNum > userNum){
        printf("My number is greater than %d",userNum);
    }else{
        printf("My nunber is samaller then %d",userNum);
    }
    
    return 0;
}
