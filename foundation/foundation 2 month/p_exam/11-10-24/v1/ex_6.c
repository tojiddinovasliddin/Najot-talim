#include <stdio.h>
#include <stdlib.h>
struct book
{
	char name[50];
	char author[50];
	int page;
	int price;
};
typedef struct book book;
void check(book a[], int k)
{
	for(int i=0;i<k;i++)
	{
			printf("Name:		%s\n",a[i].name);
			printf("Author:		%s\n",a[i].author);
			printf("Page:		%d\n",a[i].page);
			printf("Price:		%d\n",a[i].price);
			puts("---------------------------------");
	}

}
void checks(book ms[],int a)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a-1;j++)
		{
			if(ms[i].price>ms[j].price)
			{
				book c=ms[i];
				ms[i]=ms[j];
				ms[j]=c;
			}
		}
	}
}

int main()
{
	book b[]={{"C dasturlash asoslari", "Ali Valiyev", 350, 120000.0},
        {"Python mukammal qo‘llanma", "Gulbahor Karimova", 500, 98000.0},
        {"Java asoslari", "Hasan Ergashev", 420, 103500.0},
        {"Web dasturlash", "Sanjar Bek", 300, 87000.0},
        {"Go tilida dasturlash", "Rustam Sodiqov", 250, 134000.0},
        {"SQL asoslari", "Umida Tursunova", 200, 70000.0},
        {"Algoritmlar", "Bobur Qodirov", 330, 150000.0},
        {"Linux tizimlari", "Iroda Nishonova", 410, 120500.0},
        {"Ma'lumotlar bazasi", "Jasur Karimov", 380, 99000.0},
        {"Sun'iy intellekt kirish", "Ozod Ergashev", 290, 123000.0}
    };
	int n=sizeof(b)/sizeof(book);
	checks(b,n);
	check(b,n);
}
