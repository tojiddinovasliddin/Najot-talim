#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return 1+rand()%(30-1+1);
}
int check(int a)
{
	if(a % 2 ==0)
	{
	return a * 2;
	}
	else 
	{
	return a - 2;
	
	}
}
int main()
{
	srand(time(0));
	int i,n,j,t;
	printf("Nechta elemenet kiritmowchisz: ");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,", arr[i]);
	}
	printf("\n");
	printf("\t\tKiritishdan keyingi natija\n");
	for(i=0;i<n;i++)
	{
	printf("%d,",check(arr[i]));
	}
return 0;
}

