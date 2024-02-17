#include<stdio.h>
int add(int a,int b);

int main() {
	int a,b;
	int c;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	
	printf("enter the value of b :");
	scanf("%d",&b);
	
	c=add(a,b);
	
	printf("addition is :%d\n",c);
}
// function defination.....

int add(int a,int b)
{
	int c;
	
	c=a+b;
	
	return c;
}