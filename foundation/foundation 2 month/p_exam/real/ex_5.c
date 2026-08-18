#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}


int main()
{
	int n;
	int m;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	printf("Kiriting: ");
	scanf("%d",&m);
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		arr[i][j]=enter();
		printf("%4d",arr[i][j]);
		}
	puts("");
	}
	int cnt =1;
	for(int i=0;i<n;i++)
	{
	int sum=0;
		for(int j=0;j<m;j++)
		{
		sum+=arr[i][j];
		}
	printf("%d Qator yigindisi: %d\n",cnt,sum);
	cnt++;
	}
		
}
