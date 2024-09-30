/*15. Write a program in C to find the largest and smallest words in a string*/
#include<stdio.h>
main()
{
	char name[30];
	
	int i=0,max=0,min=0;
	printf("Enter a name:");
	gets(name);
	
	for (i=0;name[i]!='\0';i++)
	{
		if (name[i]>max)
		{	
			max=name[i];
			
		}
	 
		
		
	}
	printf("Largest worlds in name:%c",max);
}
