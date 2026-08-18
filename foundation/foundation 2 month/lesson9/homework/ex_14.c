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
void sort(food check[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(check[i].price <check[j].price)
            {
                food chess = check[i];
                check[i] = check[j];
                check[j] = chess;
            }
        }
    }
}
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
		sort(check,n);
		for(int i=0;i<n;i++)
		{
			printf("Name:			%s\n",check[i].name);
			printf("Product:		%s\n",check[i].product);
			printf("Price:			%d\n",check[i].price);
			printf("Nation:			%d\n",check[i].nation);
			puts("");
		}

}
