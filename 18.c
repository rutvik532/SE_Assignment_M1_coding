/*18. Write a C program to calculate profit and loss on a transaction.*/
#include<stdio.h>
main()
{
	int sellingprice,costprice;
	
	printf("Enter the selling price:");
	scanf("%d", &sellingprice);
	
	printf("Enter the cost price:");
	scanf("%d", &costprice);
	
	if(sellingprice>costprice)
	{
		printf("You profit this transaction");
	}
	else if (costprice>sellingprice)
	{
		printf("You loss this transaction");
		
	}
	
	else 
	{
		printf("neither loss neither profit ");
	}
}
