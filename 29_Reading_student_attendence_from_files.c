//Author Name:Harsh Mahajan
//WAP for reading the student attendence data through files
#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("new.txt","a"); 
	
	char name[20];float attendence;
	if(fp==NULL)
	{
		printf("not exist"); exit(1);      //what exit()stands for
	}

	fscanf(fp,"%s",name);
	fscanf(fp,"%f",attendence);

	printf("%s",name);
	printf("%f",attendence);

	fclose(fp);

	return 0;
}
//End of the main function body