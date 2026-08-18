#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdbool.h>

struct food
{
	char name[100];
	char  product[100];
	int price;
	bool nation;
};
typedef struct food food;
int main()
{
	food check[]={
    	{"Palov", "guruch", 30000, true},
    	{"Shashlik", "gosht", 25000, false},
    	{"Mastava", "kartoshka", 22000, true},
    	{"Lagmon", "xamir", 28000, false},
    	{"Manti", "qiyma", 32000, false},
    	{"Pizza","kolbasa", 45000, true},
	{"Burger", "bulochka", 38000, true},
	{"Pasta Carbonara","makaron", 50000, true},
	{"Caesar Salad", "soya", 35000, false},
	{"Palov","sabzi", 34000, true}
	};
	int n=sizeof(check)/sizeof(food);
	int cnt =0;
	int ms[100];
	for(int i=0;i<n;i++)
	{
		if(strcmp(check[i].name,"Palov")==0)
		{
			if(check[i].price<35000)
			{
				ms[cnt]=i;
				cnt++;
			}
		}
	}
	if(cnt ==0)
	{
	puts("Bunqa ovqat yoki narx yuq");
	}
	else
	{
		for(int i=0;i<cnt;i++)
		{
			printf("Name:			%s\n",check[ms[i]].name);
			printf("Product:		%s\n",check[ms[i]].product);
			printf("Price:			%d\n",check[ms[i]].price);
			printf("Nation:			%d\n",check[ms[i]].nation);
			puts("");
		}
	}

}
