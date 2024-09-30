/*23.  C Program to Reverse a Number Using FOR Loop 
Series Program:  */
#include<stdio.h>
main()
{
	int rev,n;
	
	printf("Enter the number:");
	scanf("%d", &n);
	
	
	while(n>0)
	{
		
		rev=n%10;
		printf("%d",rev);
		n=n/10;
		
		
	}
}
