//Author Name:Harsh Mahajan
//WAP to store information of a student using union  
#include<stdio.h>
union student
{
	char name[20];
	int roll;
	int sem;
};
int main()
{
	union student S1;
	printf("Enter details of student");
	
	scanf("%s%d%d",&S1.name,&S1.roll,&S1.sem);

	printf("Name =%s\n Roll =%d\n Sem =%d",S1.name,S1.roll,S1.sem);
	return 0;
}
//End of the main function body