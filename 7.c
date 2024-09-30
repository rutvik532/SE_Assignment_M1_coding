/*7. Write a program in C to copy one string to another string.*/
#include<string.h>
main()
{
	char name1[30],name2[30];
	
	
	printf("Enter a name1:");
	gets(name1);
	
	strcpy(name2,name1);
	
	printf("\n Name2:%s",name2);


	
	
	
}
