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
	int cnt=0;
	int arr[100];
	for(int i=0;i<n;i++)
	{
		if(ms[i].memory>6)
		{
			arr[cnt]=i;
			cnt++;
		}
	}
	if(cnt==0)
	{
	printf("Bunday computer yuq");
	}
	else
	{
	for(int i=0;i<cnt;i++)
	{
	   printf("Model:      %s\n",ms[arr[i]].model);
	printf("Price:         %d\n",ms[arr[i]].price);
	printf("Memorry:        %d\n",ms[arr[i]].memory);
        printf("Videokarta:    %s\n",ms[arr[i]].videokarta ?"Ha" : "Yo'q");
	puts("");
	}
	}

}
