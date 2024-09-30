/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height. */

#include<stdio.h>
main()

{
	int height;
	
	printf("Enter the person height in cm:");
	scanf("%d", &height);
	
	if (height<=45)
	
	{
		printf("Enter height person is 1 year old");
	}
	
	else if (height<=60)
	
	{
		printf("Enter height person is 3 year old");
	}
	
	else if (height<=90)
	{
		printf("Enter height person is 4 year old");
	}
	else if (height<=120)
	{
		printf("Enter height person is 12 year old");
	}
	else if (height<=150)
	{
		printf("Enter height person is 15 year old");
	}
	else if(height<=180)
	
	{
		printf("Enter height person is 20 year old");
		
	}
	
	else if (height<=210)
	{
		printf("Enter height person is 24 year old");
		
	}
	
	else 
	{
		printf("Enter invalid height");
	}
}
