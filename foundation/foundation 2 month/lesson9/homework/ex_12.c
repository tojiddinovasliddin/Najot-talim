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
void sort(con check[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(check[i].area > check[j].area)
            {
                con chess = check[i];
                check[i] = check[j];
                check[j] = chess;
            }
        }
    }
}

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
	sort(pop,n);
		for(int i=0;i<n;i++)
		{
		printf("Country:     %s\n",pop[i].name);
		printf("Capital:     %s\n",pop[i].capital);
		printf("Population:  %d\n",pop[i].population);
		printf("Area:        %d\n",pop[i].area);
		puts("");
		}
}
