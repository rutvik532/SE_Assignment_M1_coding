/*10. WAP to check whether a number is negative, positive or zero.*/
#include<stdio.h>
main()
{
	int number;
	
	printf("Enter the number:");
	scanf("%d", &number);
	
	if(number >0)
	{
		printf("Enter number is positive");
	}
	else if(number<0)
	{
		printf("Enter number is negative");
	}
	else
	{
		printf("Enter number is zero");
	}
}
