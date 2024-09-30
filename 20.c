/*20.Write a program in C to read any Month Number in integer and display the 
number of days for this month. */
#include<stdio.h>
main()

{
	int month;
	
	printf("Enter the number 1 to 12:");
	scanf("%d", &month);
	
	switch (month)
	{
	
	case 1 : printf("31 Days in 1^st month");  break;
	case 2: printf("28 Days in 2^nd month");  break;
	case 3: printf("31 Days in 3^rd month"); break;
	case 4: printf("30 Days in 4^th month"); break;
	case 5: printf("31 Days in 5^th month"); break;
	case 6: printf("30 Days in 6^th month"); break;
	case 7: printf("31 Days in 7^th month"); break;
	case 8: printf("31 Days in 8^th month"); break;
	case 9: printf("30 Days in 9^th month"); break;
	case 10: printf("31 Days in 10^th month"); break;
	case 11: printf("30 Days in 11^th month"); break; 
	case 12: printf("31 Days in 12^th month"); break;
    }
}
