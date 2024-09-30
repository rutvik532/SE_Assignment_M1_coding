/*9. Write a program in C to find the maximum number of characters in a string.*/
#include<stdio.h>
main()
{
	char name[30];
	int i,max=0;
	printf("Enter a name:");
	gets(name);
	
	for (i=0;name[i]!='\0';i++)
	{
		if (name[i]>max)
		max=name[i];
	}
	printf("max:%c",max);
}
