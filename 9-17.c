/*9. WAP to show difference between Structure and Union. */
#include<stdio.h>

union employee

{
	int empno;
	char empname[30];
	char empadd[30];
	int empage;
}emp[5];

main()
{
	int e;
	for(e=0;e<5;e++)
	{
	
		printf("\nEnter the employee Details %d:",e+1);
		printf("\nEnter employee Number:");
		scanf("%d",&emp[e].empno);
		printf("Enter employee Name:");
		scanf("%s",&emp[e].empname);
		printf("Enter employee the Adress:");
		scanf("%s",&emp[e].empadd);
		printf("Enter employee the age:");
		scanf("%d",&emp[e].empage);
	}
	{
	for(e=0;e<5;e++)
	{
	
		printf("\n Employee details %d:",e+1);
		printf("\nEmployee Number:%d",emp[e].empno);
		printf("\nEmployee Name:%s",emp[e].empname);
		printf("\nEmployee Adress:%s",emp[e].empadd);
		printf("\nEmployee Age:%d",emp[e].empage);
	
	}
	}
}
