#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct computer
{
	char model[50];
	int price;
	int memory;
	bool videokarta;
};
typedef struct computer com;
void sort(com check[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(check[i].price>check[j].price)
			{
			com chess=check[i];
			check[i]=check[j];
			check[j]=chess;
			}

		}
	}
	
}

int main()
{
	com ms[]={{"Hp",1234,8,false},
		{"Macbook",2344,16,true},
		{"Acer",1200,4,true},
		{"Lenov",432,8,false},
		{"Macbook",43,4,true},
		{"Hp",23,45,false},
		{"Lenovo",1233,34,false},
	        {"Macbook",433,54,true},	
		{"Lenovo",45,4,true},
		{"ZZZP",4432,43,false},
	};
	int n=sizeof(ms)/sizeof(com);
	sort(ms,n);
	for(int i=0;i<n;i++)
	{
	   printf("Model:      %s\n",ms[i].model);
	printf("Price:         %d\n",ms[i].price);
	printf("Memorry:        %d\n",ms[i].memory);
        printf("Videokarta:    %s\n",ms[i].videokarta ?"Ha" : "Yo'q");
	puts("");
	}

}
