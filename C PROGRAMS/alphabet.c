#include<stdio.h>
int main() {
	FILE *fptr;
	fptr=fopen("alphabet.txt","w");
	
	char ch;
	
	for(ch='a';ch<='z';ch++)
	{
		fprintf(fptr,"%c\n",ch);
		
	}
	
	fclose(fptr);
}