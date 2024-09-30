/*19 pattern 4*/
#include<stdio.h>
main()
{
	
	int r,c;
	char ch='A';
	
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf("%c", ch);
			c++;
			ch++;
		}
		
	r++;
	
	printf("\n");
	
	}
	
	
}
