#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[20];
	float salary;
	char add[20];
};
	int main(){
		struct employee e1;
		struct employee e2;
		
		printf("enter the first employye id :");
		scanf("%d",&e1.id);
		
		printf("enter the second employee id :");
		scanf("%d",&e2.id);
		
		strcpy(e1.name,"lalit");
		strcpy(e2.name,"yogesh");
		
		printf("first employee name is :%s\n",e1.name);
		printf("second employee name is :%s\n",e2.name);
		
		printf("first employee id is :%d\n",e1.id);
		printf("second employee id is :%d\n",e2.id);
		
		printf("enter the first employee salary :");
		scanf("%f",&e1.salary);
		
		printf("enter the second employee salary :");
		scanf("%f",&e2.salary);
		
		strcpy(e1.add,"bhadgone");
		strcpy(e2.add,"khetia");
		
		printf("first employye salary is :%f\n",e1.salary);
		printf("second employee salary is :%f\n",e2.salary);
		
		printf("first employee address is :%s\n",e1.add);
		printf("second employee address is :%s\n",e2.add);
		
		return 0;
	}