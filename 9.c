/*9. C Program to Check Uppercase or Lowercase or Digit or Special 
Character */

#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter any character:");
	scanf("%c", &ch);
	
	if ('A'>=ch<='Z')
	{
		printf("Enter character is Upper case");
		
	}
	
	else if ('a'>=ch<='z')
	{
		printf("Enter character is lower case");
		
	}
	
	else if ('0'>=ch<='9')
	
	{
		printf("Enter character is digit");
		
	}
	else 
	{
		printf("Enter character is special");
	}
}
