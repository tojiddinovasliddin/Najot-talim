#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int a,int b,int ms[a][b])
{
	int arr[10];
	int k[100];
	for(int i=0;i<a;i++)
	{
		int sum=0;
		for(int j=0;j<b;j++)
		{
			sum+=ms[i][j];
		}

		printf("%5d",sum);
	}
}
int main()
{
	int n,m;
	printf("N ni kiritng: ");
	scanf("%d",&n);
	printf("M ni kiriting: ");
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
	check(n,m,arr);
}
