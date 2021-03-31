//Author Name:Harsh Mahajan
//WAP for writing the student attendence data to files
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("new.txt","a"); //what a stands for?

	char name[20];float attendence;

	if(fp==NULL)
	{
		printf("enter student details"); exit(1);      //what exit()stands for
	}

	printf("enter the name:");    //why we use s instead of c?
	scanf("%s",&name);

	printf("enter the attendence");
	scanf("%f",&attendence);

	fprintf(fp,"%s",name);
	fprintf(fp,"%f",attendence);

	fclose(fp);

	return 0;
}
//End of the main function body
