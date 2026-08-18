#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
	char name[50];
	char author[50];
	int page;
	int price;
};
typedef struct book book;
void why(book ms[],int k)
{
	for(int i=0;i<k;i++)
	{
        	if(ms[i].price>20)
        	{
        	printf("Name:           %s\n",ms[i].name);
       		printf("Author:         %s\n",ms[i].author);
        	printf("Page:           %d\n",ms[i].page);
        	printf("Price:          %d\n",ms[i].price);
        	puts("---------------------------------------");
        }
	}
}

int main()
{
	book check[] = {
    	{"The Alchemist", "Asliddin", 124, 12},
    	{"1984", "Umed", 121, 20},
    	{"To Kill a Mockingbird", "Ayub", 321, 452},
    	{"Pride and Prejudice", "JAsur", 321, 53},
    	{"The Great Gatsby", "Mariyam", 432, 13},
    	{"Moby Dick", "OK", 8739, 9},
    	{"War and Peace", "ad", 4321, 12},
    	{"The Catcher in the Rye", "das", 432, 22},
    	{"Harry Potter and the Sorcerer's Stone", "dsa", 342, 32},
	{"The Hobbit", "", 342, 12}
};
	int n=sizeof(check)/sizeof(book);
	why(check,n);

}
