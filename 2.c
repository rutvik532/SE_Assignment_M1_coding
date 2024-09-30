/*2. Write a program in C to separate individual characters from a string*/
#include<stdio.h>
main()
{
	char name[10];
	
	printf("Enter the name:");
	gets(name);
	
	int i;
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("\n%c", name[i]);
	
	}
	
	

	
}
