/*8. Write a program in C to count the total number of vowels or consonants in a 
string. */
#include<stdio.h>
main()
{	 
	char name[30];
	int i=0,v=0,c=0;
	
	printf("Enter a name:");
	gets(name);
	
	while(name[i]!='\0')
	{
		if (name[i] == 'A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
		{
			v++;
		}
		
		else
		{
			c++;
		}
		i++;
	}
	printf("\nTotal vowel:%d",v);
	printf("\nTotal consonant:%d",c);
	
}
