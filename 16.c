/*16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot */

#include<stdio.h>
main()
{
	float temp;
	
	printf("Enter the temperatutre value in centigrade:");
	scanf("%f", &temp);
	
	if (temp<0)
	{
		printf("Freezing weather");
	}
	
	else if (0>=temp<10)
	{
		printf(" Very cold weather");
	}
	
	else if (10>=temp<20)
	{
		printf("Cold weather");
	}
	
	else if (20>=temp<30)
	{
		printf("Normal in Temp");
	}
	
	else if (30>=temp<40)
	{
		printf("Hot");
	}
	
	else if (temp>=40)
	{
		printf("Very hot");
	}
}
