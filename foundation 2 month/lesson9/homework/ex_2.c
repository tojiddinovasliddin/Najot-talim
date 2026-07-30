#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct country
{
	char name[50];
	char capital[100];
	int   population;
	int area;
};
typedef struct country con;
int main()
{
	con pop[]={{"Uzbekistan","Tashkent",380000000,413},
		{"Tajikistan","Dushanbe",1200000,232},
		{"Russia","Moskov",34214433,1323},
		{"India","New Delhi",3222132,123},
		{"China", "Beijing",34332244,212},
		{"Turkmenistan", "Ashgabat", 65042421, 488},
		{"Kazakhstan", "Astana", 20042140, 272},
   		{"Kyrgyzstan", "Bishkek", 71004234, 199},
		{"Pakistan", "Islamabad", 24142140, 88},
		{"Afghanistan", "Kabul", 433421421, 652},
	};
	int n=sizeof(pop)/sizeof(con);
	int cnt =0;
	int ms[100];
	for(int i=0;i<n;i++)
	{
		if(pop[i].population>35000000)
		{
			ms[cnt]=i;
			cnt++;
		}

	}
	if(cnt ==0)
	{
	puts("35 00 000 dan kup axori soni davlat yuq");
	}
	else
	{
		for(int i=0;i<cnt;i++)
		{
		printf("Country:     %s\n",pop[ms[i]].name);
		printf("Capital:     %s\n",pop[ms[i]].capital);
		printf("Population:  %d\n",pop[ms[i]].population);
		printf("Area:        %d\n",pop[ms[i]].area);
		puts("");
		}
	}
}
