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
	con pop[]={{"Uzbekistan","Tashkent",380000000,413423},
		{"Tajikistan","Dushanbe",1200000,232342},
		{"Russia","Moskov",34214433,132423},
		{"India","New Delhi",3222132,124243},
		{"China", "Beijing",34332244,214212},
		{"Turkmenistan", "Ashgabat", 65042421, 442188},
		{"Kazakhstan", "Astana", 20042140, 274232},
   		{"Kyrgyzstan", "Bishkek", 71004234, 19329},
		{"Pakistan", "Islamabad", 24142140, 88423},
		{"Afghanistan", "Kabul", 433421421, 654232},
	};
	int n=sizeof(pop)/sizeof(con);
	int cnt =0;
	int ms[100];
	for(int i=0;i<n;i++)
	{
		if(pop[i].population/pop[i].area>150)
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
