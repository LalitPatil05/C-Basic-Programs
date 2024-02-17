#include<stdio.h>
#include<string.h>
union student{
	char name[30];
	int roll;
	float marks;
};
	int main(){
		union student obj;
		strcpy(obj.name,"LALIT PATIL");
		obj.roll=101;
		obj.marks=78.38;
		// print student obj values,,,
		
		printf("name is :%s\n",obj.name);
		printf("roll no is :%d\n",obj.roll);
		printf("marks is :%f\n",obj.marks);
	}