// call by reference example program.....

#include<stdio.h>
void swap(int *i,int *j);
int main(){
	
	int a,b;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	printf("before swaping value of a :%d\n",a);
	printf("before swaping value of b :%d\n",b);

	swap(&a,&b);
	 
	printf("after swaping value of a :%d\n",a);
	printf("after swaping value of b :%d\n",b);
	
}

void swap(int *i,int *j){
	
	int temp;
	temp=*i;
	*i=*j;
	*j=temp;
	
}