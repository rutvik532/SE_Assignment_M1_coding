/*7. Accept marks from user and check pass or fail*/
#include<stdio.h>
main()

{  
 int rollnumber;
 char name[30];
 int s1,s2,s3,s4,s5;
 
 
    printf("enter the Rollnumber:");
    scanf("%d", &rollnumber);
	printf("Enter the name:");
	scanf("%s", &name);
	printf("Enter the subject-1 mark :");
	scanf("%d",&s1);
	printf("Enter the subject-2 mark :");
	scanf("%d",&s2);
	printf("Enter the subject-3 mark :");
	scanf("%d",&s3);
	printf("Enter the subject-4 mark :");
	scanf("%d",&s4);
	printf("Enter the subject-5 mark :");
	scanf("%d",&s5);
	printf("\nResult");
	printf("\n---------------------------------------");
	printf("\nRollnumber: %d", rollnumber);
	printf("\nname :%s",name);
	printf("\n---------------------------------------");
	printf("\nSubject-1:%d",s1);
	printf("\nSubject-2:%d",s2);
	printf("\nSubject-3:%d",s3);
	printf("\nSubject-4:%d",s4);
	printf("\nSubject-5:%d",s5);
	
	int total=s1+s2+s3+s4+s5;
	int per=total/5;
	printf("\n---------------------------------------");
	if (s1,s2,s3,s4,s5<40)
		printf("\nFail");
		
	else if (per>=70)
	    printf("\nGrade=A");
		
	else if (per>=60)
	    printf("\nGrade=B");
		
		
    else if (per>=50)
        printf("\nGrade=C");
        
    else 
	
	  printf("\nFail");
    
      
      
  }
