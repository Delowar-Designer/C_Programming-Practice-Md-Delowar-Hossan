/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Guess The Number Game in c programming
int main()
{
    int myNum,userNum;
    //random number generate
    srand(time(NULL)); 
    myNum = rand() % 10;

    printf("I have a number in maind (0-9). can you guess it?\n");
    while((1)){
        printf("Enter your Guess:\n");
    scanf("%d",&userNum);

    if(myNum == userNum){
        printf("Yes you got it!");
        break;
    }else if(myNum > userNum){
        printf("My number is greater than %d\ntry agin\n",userNum);
    }else{
        printf("My nunber is samaller then %d\ntry agin\n",userNum);
    }
    }
    

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, guess, attempts = 0;
    
    // Generate a random number between 1 and 100
    srand(time(NULL));
    number_to_guess = rand() % 100 + 1;

    printf("Welcome to the Guess The Number game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else if (guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number_to_guess, attempts);
        }

    } while (guess != number_to_guess);

    return 0;
}
