/*6. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.*/
#include<stdio.h>
#include<ctype.h>
main()
{	
	char name[30];
	int i=0,alph=0,digit=0,spec=0;

	printf("Enter a name:");
	gets(name);
	
	while (name[i]!='\0')
	{
		if (isalpha(name[i]))
		{
			alph++;
			
		}
		else if(isdigit(name[i]))
		{
			digit++;
		}
		
		else
		{
			spec++;
		}
		i++;
		
	}
	printf("\nTotal alphabet:%d",alph);
	printf("\nTotal digit:%d",digit);
	printf("\nTotal special :%d",spec);
	
	
}

