/*9. Write a program make a summation of given number (E.g., 1523 Ans: -11) */
#include<stdio.h>
main()
{
	int n,num,sum=0;
	
	printf("Enter the number :");
	scanf("%d", &n);
	
	while(n>0)
	{
		num=n%10;
		sum+=num;
		n=n/10;
		
	}
	
	printf("%d",sum);
}
