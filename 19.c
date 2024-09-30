/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
the minimum bill should be of Rs. 256/- */

#include<stdio.h>
main()
{
	char name[30];
	printf("Enter the customer name:");
	gets(name);
	
	
	float unit,customerid;
	
	printf("Enter the customer id:");
	scanf("%f", &customerid);
	printf("Enter the unit:");
	scanf("%f", &unit);
	
	printf("Name:");
	puts(name);
	printf("\nCustomer ID:%.2f", customerid);
	printf("\nUnit:%.2f", unit);
	
	if (0>=unit<350)
	{
		printf("\nTotal bill:%.2f", unit*1.20);
	}
	else if(350>=unit<600)
	{
		printf("Total bill:%.2f", unit*1.5);
	}
	else if(600>=unit<800)
	{
		printf("Total bill:%.2f", unit*1.8);
	}
	else if(unit>=800)
	{
		printf("Total bill:%.2f", unit*2+unit*2*.18);
	}
	
	
}
