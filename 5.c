/*5. Write a program in C to compare two strings without using string library 
functions.*/
#include<string.h>
main()
{
	char name1[30],name2[30];
	
	
	printf("Enter a name1:");
	gets(name1);
	printf("Enter a name2:");
	gets(name2);
	
	if(stricmp(name1,name2)==0)

		printf("\nstring are equal");
	
	
	else
	
		printf("string are not equal");
	
	
}
