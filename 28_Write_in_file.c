//Author Name:Harsh Mahajan
//WAP for writing data to files
#include<stdio.h>
int main()
{
    FILE *fp;
int number;
    fp=fopen("new.txt","w");

	if(fp==NULL)
	{
		printf("enter details"); exit(1);      //what exit()stands for
	}

	printf("enter a number:");
	scanf("%d",&number);

	fprintf(fp,"%d",number);

	fclose(fp);

	return 0;
}
//End of the main function body
