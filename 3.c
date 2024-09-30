/*3. WAP to check if the given year is a leap year or not.*/

#include<stdio.h>
main()
{
	
	int year;
	
	printf("Enter the year for checking year is leap year or not:");
	scanf("%d", &year);
	
	if (year%4==0)
	
	{
		printf("The year is leap year");
	
	}
	
	else 
	
	{
		printf("The year is not leap year");
		
	}
}
