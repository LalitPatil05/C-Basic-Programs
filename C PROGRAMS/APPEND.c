#include<stdio.h>
int main() {
	FILE *fptr;
	fptr=fopen("alphabet.txt","a");
	
	char ch;
	
	for(ch='A';ch<='Z';ch++)
	{
		fprintf(fptr,"%c\n",ch);
		
	}
	
	fprintf(fptr,"THIS IS EXAMPLE OF APPEND MODE PROGRAM THROUGH\n",ch);
	
	fclose(fptr);
}