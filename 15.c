/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria  
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 ------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
main()
{
	char name[30];
	printf("Enter the name:");
	gets(name);
	
	
	
	int rollnumber,phy,maths,chem,total;
	
	printf("\nEnter the rollnumber:");
	scanf("%d", &rollnumber);
	
	
	
	printf("\nEnter the maths mark:");
	scanf("%d", &maths);
	
	printf("\nEnter the phy mark:");
	scanf("%d", &phy);
	
	
	printf("\nEnter the chem mark:");
	scanf("%d", &chem);
	
	
	
	total=maths+phy;
	printf("\nResult");
	printf("\nName:");
	puts( name );
	printf("\nRoll number:%d", rollnumber);
	printf("\nMATHS:%d", maths);
	printf("\nPHY:%d", phy);
	printf("\nchem:%d", chem);
	printf("\n-----------------------------------------");
	
	if (maths>=65 && phy>=55 && chem>=50 || total>=140)
	
	{
		printf(" \ncongratulations,You are eligible for admission");
		
	}
	
	else 
	{
		printf("\nOops,You are not eligibile for admission");
	}
	
	
	
}
