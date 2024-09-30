/*11. WAP to find number is even or odd using ternary operator */
#include<stdio.h>
main()
{
	int number;
	printf("Enter any number:");
	scanf("%d", &number);
	
	number%2==0?printf("Enter %d number is even",number):printf("Enter %d number is odd", number);
}

