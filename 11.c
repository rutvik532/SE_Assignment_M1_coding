/*11. Write a program in C to read a sentence and replace lowercase characters with 
uppercase and vice versa. */

#include<string.h>
main()

{
	char name[30];
	
	printf("Enter a name:");
	gets(name);
	
	printf("Enter string in Uprcase:%s",strupr(name));
}
