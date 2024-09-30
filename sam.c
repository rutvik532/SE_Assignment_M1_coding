#include<stdio.h>
main()
{
	int a=0,b=1,c,i,n;
	
	printf("Enter the number of fibonaci series:");
	scanf("%d", &n);
	
	printf("\t%d \t%d", a,b);
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf("\t%d", c);
		a=b;
		b=a;
		i++;
	}	
	
}
