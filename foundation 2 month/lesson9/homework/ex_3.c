#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Avia_Reys
{
	char go[50];
	char come[50];
	char go_time[50];
	int price;

};
typedef struct Avia_Reys reys;

int main()
{
	reys where[]={    {"Liverpool", "Paris", "12-01-2026", 450},
    {"Liverpool", "Berlin", "15-06-2026", 520},
    {"London", "Liverpool", "20-12-2026", 800},
    {"Liverpool", "Rome", "18-12-2026", 300},
    {"Madrid", "Dubai", "10-02-2026", 600},
    {"Liverpool", "Istanbul", "22-06-2026", 499},
    {"Paris", "Liverppol", "25-12-2026", 700},
    {"Liverpool", "Amsterdam", "28-06-2026", 200},
    {"Berlin", "Liverpool", "30-01-2026", 550},
    {"Liverpool", "Prague", "05-07-2026", 480}
};
	int n=sizeof(where)/sizeof(reys);
	int cnt =0;
	int ms[100];
	for(int i=0;i<n;i++)
	{
		if(strcmp(where[i].go,"Liverpool")==0)
		{
			if(where[i].price<500)
			{
			ms[cnt]=i;
			cnt ++;
			}
		
		}
		
	}
	if(cnt==0)
	{
	puts("Bunday reys yuq");
	}
	else
	{
		for(int i=0;i<cnt;i++)
		{
		printf("Uchish shahri:          %s\n",where[ms[i]].go);
		printf("Qonish shahri:		%s\n",where[ms[i]].come);
		printf("Uchish sanasi:		%s\n",where[ms[i]].go_time);
		printf("Ticket price:		%d\n",where[ms[i]].price);
		puts("");
		}
	}

}
