#include<stdio.h>
int main()
/*{
    int x = 10;
    int y = --x; //x++, ++x, --x, x--
    
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    return 0;
}*/

{
    int x=10;

    printf("%d\n",x++); //x=10
    printf("%d\n",x); //x=11
    printf("%d\n",++x); //x=12
    printf("%d\n",x); //x=12
    printf("%d\n",x--); //x=12
    printf("%d\n",--x); //x=10

    return 0;
}