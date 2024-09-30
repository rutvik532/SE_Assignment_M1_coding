/*14. WAP to find the largest of three numbers.*/
#include<stdio.h>
main()
{
	
	int a,b,c;
	
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	printf("Enter the value of c:");
	scanf("%d", &c);
	
	if (a>b)
	{
		printf("a is large ");
	}
	
	else if (b>c)
	{
		printf("b is large");
	}
	
	else 
	{
		printf("c is large");
	}
	
	
}
