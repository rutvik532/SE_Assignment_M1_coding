/*19.Pattern 2*/
#include<stdio.h>
main()
{
	
	int r,c;
	
	
	
	
	r=1;
	
	while (r<=5)
	{
		c=1;
		while(c<=r)
		{
		
		if (r%2==0)
			{
				printf("0");
			}
		
			else 
			{
				printf("1");
			}
			c++;
		}
		r++;
		printf("\n");
	}
	
}
