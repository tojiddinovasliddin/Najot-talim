#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return  -20+ rand()%(20-(-20)+1);
}
int main()
{
	srand(time(0));
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	printf("\nToq sonlar: ");
	for(int i=0;i<n;i++)
		if(arr[i]<0)
	{
	printf("%d, ", arr[i]);
	}
	printf("\nJuft sonlar: ");
	for(int i=0;i<n;i++)
	{
		 if( arr[i]>0)
         	{
          	 printf("%d,",arr[i]);
           	}
	}	
	printf("\nNol: ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
		printf("%d, ",arr[i]);
		}
	}
return 0;
}
