#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	float per;
	char village[20];
};
	int main(){
		struct student s1;
		s1.roll=10;
		strcpy(s1.name,"LALIT");
		s1.per=78;
		strcpy(s1.village,"BHADGONE");
		
		// print s1 values....
		
		printf("student roll no. is :%d\n",s1.roll);
		printf("student name is :%s\n",s1.name);
		printf("student percentages is :%f\n",s1.per);
		printf("student village name is :%s\n",s1.village);
	}