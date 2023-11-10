/*#include<stdio.h>
int main()
{   
//function in c
    
    hello();
    return 0;
}
//fuction definition
void hello(){
    printf("Hello user");
}*/
#include <stdio.h>
int main()
{
    int result = get_sum(50,20);
    printf("my sum is: %d", result);
    return 0;
}

int get_sum(int x, int y){
    int sum = x+y;
    return sum;
}
