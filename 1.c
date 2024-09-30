/*1. Write a C program to accept two integers and check whether they are equal 
or not */

#include<stdio.h>
main()

{
	
	int a,b;
	
	printf("Enter the value of a:");
	scanf("%d", &a);
	
	printf("Enter the value of b:");
	scanf("%d", &b);
	
	if (a==b)
	
	{ 
		printf("The enter value are equal");
		
	}
	
	else 
	{
		printf("The enter value are not equal ");
		
	}
}
