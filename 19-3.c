/*19-3 pattern */
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
		}
	r++;
	ch++;
	printf("\n");
	}
	
}
