//Author Name:Harsh Mahajan
//WAP to read data in files
#include<stdio.h>
int main()
{
    FILE*fp;
int number;
    fp=fopen("new.txt","r");

	if(fp==NULL)
	{
		printf("file does not exist"); exit(1);      //what exit()stands for
	}

	fscanf(fp,"%d",&number);

	printf("%d",number);

	fclose(fp);

	return 0;
}
//End of the main function body
