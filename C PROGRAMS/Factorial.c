#include<stdio.h>
int fact(int n);
int main() {
	int n,ans;
	printf("enter the number :");
	scanf("%d",&n);
	
	fact(n);
}
	// function defination 
	
	int fact(int n)
	{
	
		int fact=1;
		
		for(int i=1;i<=n;i++)
		{
			fact=fact*i;
		}
	printf("factorial is :%d\n",fact);
}