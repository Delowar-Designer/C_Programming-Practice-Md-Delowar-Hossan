#include<stdio.h>
int main()
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
}
