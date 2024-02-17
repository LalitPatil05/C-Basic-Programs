#include<stdio.h>
int sum(int n);
int main(){
	int n,s;
	printf("enter number :");
	scanf("%d",&n);
	
	s=sum(n);
	printf("sum is :%d\n",s);	
}
// function defination 
int sum(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}	
	int sumSM1=sum(n-1);
	int sumN=sumSM1+n;
	return sumN;
}