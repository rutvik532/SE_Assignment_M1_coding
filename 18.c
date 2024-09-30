/*18. Write a C Program to Print the Multiplication Table of N */
#include<stdio.h>
main()
{
	int num,i;
	
	printf("Enter the number for multiplicatin:");
	scanf("%d", &num);
	
	for (i=1;i<=10;i++)
	{
	     printf("\n%d*%d=%d",num,i,num*i);	
	}	
}
