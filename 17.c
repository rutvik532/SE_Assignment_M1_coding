/*17. Write a C program to check whether a triangle can be formed with the given 
values for the angles. */

#include<stdio.h>
main()

{
	
	float a,b,c;
	
	printf("Enter the value of a:");
	scanf("%f", &a);
	
	printf("Enter the value of b:");
	scanf("%f", &b);
	
	printf("Enter the value of c:");
	scanf("%f", &c);
	
	if (a+b+c==180)
	{
		printf("Triangle can be formed");
	}
	
	else 
	{
		printf("Triangle can not be formed");
	}
}
