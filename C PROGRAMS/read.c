#include<stdio.h>
int main() {
	FILE *fptr;
	fptr=fopen("evennum.txt","r");
	
	int n;
	 
	 for(int n=1;n<=20;n++)
	 {
	 	fscanf(fptr,"%d",&n);
	 	printf("Number is :%d\n",n);
	 }
	 
	
	fclose(fptr);
}