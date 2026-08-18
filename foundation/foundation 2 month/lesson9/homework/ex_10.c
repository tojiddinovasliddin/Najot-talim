#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct televizor
{
	char model[50];
	int size;
	int price;
	bool smart;

};
typedef struct televizor tv;

int main()
{
	tv check[]={
        {"Samsung TU7000", 43, 520, true},
        {"LG NanoCell 75", 55, 890, false},
        {"Sony Bravia X75", 50, 730, true},
        {"Artel 43KF5000", 43, 210, false},
        {"Artel", 55, 554, false},
        {"Artel", 55, 680, true},
        {"Artel", 86, 171, false},
        {"TCL P635", 50, 610, false},
        {"Hisense A6H", 58, 65000,true},
        {"Xiaomi Mi TV P1", 55, 600,true}
    };
	int n=sizeof(check)/sizeof(tv);
	int cnt =0;
	int ms[50];
	for(int i=0;i<n;i++)
	{
		if(check[i].smart==true)
		{
			if(check[i].price>500)
			{
			ms[cnt]=i;
			cnt++;
			}
		}
	}
	if(cnt ==0)
	puts("Bunda model yuq");
	else
	{
	for(int i=0;i<cnt;i++)
	{
		printf("Model:			%s\n",check[ms[i]].model);
		printf("Size			%d\n",check[ms[i]].size);
		printf("Price:			%d\n",check[ms[i]].price);
		printf("Smart:			%d\n",check[ms[i]].smart);
		puts("");
	}
	}
}
