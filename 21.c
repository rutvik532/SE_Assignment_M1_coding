/*21.Write a C program to input basic salary of an employee and calculate 
its Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include<stdio.h>
main()
{
	float salary,da,hra,gross;
	
	printf("Enter the basic salary:");
	scanf("%.2f", &salary);
	
	if (salary<=10000)
	{
	   hra=salary*.2;
	   da=salary*.8;
	}
	else if(10000<salary<=20000)
	{
		hra=salary*.25;
		da=salary*.9;
		
	}
	else 
	{
		hra=salary*.3;
		da=salary*.95;
	}
	
	gross=salary+hra+da;
	printf("Gross salary:%.2f", gross);
}
