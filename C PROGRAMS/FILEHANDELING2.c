#include<stdio.h>
int main() {
	FILE *fptr;
	fptr=fopen("file.txt","w");
	
	char ch;
	fprintf(fptr,"LALIT",ch);
	
	fclose(fptr);
	
	return 0;
}