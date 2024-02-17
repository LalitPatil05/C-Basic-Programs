#include<stdio.h>
int main() {
	FILE *fptr;
	fptr=fopen("file.txt","r");
	
	char ch;
	
	fscanf(fptr,"%c",&ch);
	printf("character in file is : %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("character in file is : %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("character in file is : %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("character in file is : %c\n",ch);
	fscanf(fptr,"%c",&ch);
	printf("character in file is : %c\n",ch);
	
	fclose(fptr);
	return 0;
}