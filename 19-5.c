/*19 pattern 5*/
#include<stdio.h>
main()
{
	int r,c,num;
	num=1;
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		
		{
			printf("%d",num);
			num++;
			c++;
		}
		printf("\n");
	r++;
	}
}
