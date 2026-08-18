#include <stdio.h>
#include <stdlib.h>
struct sport
{
	char name[50];
	char model[50];
	int year;
};
typedef struct sport sport;

int main()
{
	sport type[] = {
	{"Sardor", "Tennis", 28},
        {"Javlon", "Football", 28},
        {"Aziza", "Volleyball", 22},
        {"Bekzod", "Basketball", 30},
        {"Malika", "Tennis", 27},
        {"Jamshid", "Boxing", 24},
        {"Dilshod", "Football", 29},
        {"Nigina", "Running", 21},
        {"Otabek", "Swimming", 26 },
        {"Shahnoza", "Tennis", 23}
	};
	int n=sizeof(type)/sizeof(sport);
	for(int i=0;i<n;i++)
	{
		if(type[i].year>25)
		{
		printf("Name:		%s\n",type[i].name);
		printf("Model:		%s\n",type[i].model);
		printf("Year:		%d\n",type[i].year);
		puts("");
		}
	}
	


}
