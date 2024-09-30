/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement */

#include<stdio.h>
main()

{
	int a,b,num;
	
	printf("Enter the value of a:");
	scanf("%d", &a);
	
	printf("Enter the value of b:");
	scanf("%d", &b);
	printf("------------------------------------");
	printf("\npress 1 for addition");
	printf("\npress 2 for substraction");
	printf("\npress 3 for multiplication");
	printf("\npress 4 for divide");
	
	printf("\n------------------------------------");
	
	printf("\nEnter the value of your selection:");
	scanf("%d", &num);
	
	
	switch (num)
	{
		
		case 1: printf("%d", a+b); break ;
		
		case 2: printf("%d", a-b); break ;
		
		case 3: printf("%d", a*b); break;
		
		case 4: printf("%d", a/b); break ;
	}
	
	
	
	
}
