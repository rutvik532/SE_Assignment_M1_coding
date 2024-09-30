/*13. WAP to find minimum number among 3 numbers using ternary operator */
#include<stdio.h>
main()
{
	
	int a,b;
	
	printf("Enter the value of a:");
	scanf("%d", &a);
	
	printf("Enter the value of b:");
	scanf("%d", &b);
	
	a>b? printf("%d is min", b): printf("%d is min ", a);
	
}
