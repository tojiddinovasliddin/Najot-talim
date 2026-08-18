#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return  rand()%100;
}
void  show(int arr[], int N)
{
	for (int i = 0; i < N; i ++)
		printf("%4d",arr[i]);
	printf("\n");
}
void bubble_sort(int arr[],int n)
{
	int item;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				item=arr[i];
				arr[i]=arr[j];
				arr[j]=item;
			}
			
		}
	}
}
void second(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(i==1)
		{
		printf("Second min is: %d",arr[i]);
		}
	}
}
int main()
{
	srand(time(0));
	int m;
	printf("Elementlar soni: ");
	scanf("%d",&m);
	int book[m];
	for(int i=0;i<m;i++)
	{
	book[i]=enter();
	
	}
	printf("\n\tSalarshdan oldin ");
	show(book,m);
	bubble_sort(book,m);
	printf("\n\tSalarashdan keyin");
	show(book,m);
	second(book,m);
return 0;
}
