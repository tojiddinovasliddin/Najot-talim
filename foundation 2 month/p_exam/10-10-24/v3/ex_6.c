#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[50];
	int id;
	double rey;
};
typedef struct student stu;
void check( stu ms[],int k)
{
	for(int i=0;i<k;i++)
	{
		if(ms[i].rey>80)
		{
		printf("Name:		%s\n",ms[i].name);
		printf("ID:		%d\n",ms[i].id);
		printf("Rey:		%.2lf\n",ms[i].rey);
		puts("-----------------------------------\n");
		}
	}
}
int main()
{
	stu str[]={
	{"Aslddin", 12, 67.12},
        {"Ali", 13, 75.50},
        {"Vali", 14, 82.30},
        {"John", 15, 90.00},
        {"Sara", 16, 88.75},
        {"Tom", 17, 71.20},
        {"Anna", 18, 95.60},
        {"Mike", 19, 68.40},
        {"Emma", 20, 79.90},
        {"David", 21, 85.10}
	};
	int n=sizeof(str)/sizeof(stu);
	check(str,n);
}
