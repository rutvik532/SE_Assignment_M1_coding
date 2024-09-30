/*1. Write a program in C to find the length of a string without using library 
functions. */

#include<stdio.h>
main()
{
	char name[10];
	
	printf("Enter the name:");
	gets(name);
	
	int i,count=0;
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("\n%c", name[i]);
		count++;
	}
	
	
	printf("\nLenght of string:%d",count);
	
}
