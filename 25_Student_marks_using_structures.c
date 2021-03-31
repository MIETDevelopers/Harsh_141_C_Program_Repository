//Author Name:Harsh Mahajan
//WAP To store the information of student marks using structures and find total marks of individual student  
#include<stdio.h>
struct student
{
	char name[20];
	int roll;
};
int main(){
	struct student S1;

	printf("Enter details of student:");

	scanf("%s%d",&S1.name,&S1.roll);

	printf("Details of student:\n");

	printf("%s%d",S1.name,S1.roll);
	
	return 0;
}
//End of the main function body