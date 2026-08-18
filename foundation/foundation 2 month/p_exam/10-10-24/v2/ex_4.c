#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
void check(int a, int b, int ms[a][b])
{
	int res[100];
	for(int i=0;i<a;i++)
	{
		int max=INT_MIN;
		for(int j=0;j<b;j++)
		{
		if(ms[i][j]>max)
		max=ms[i][j];
		}
	printf("%3d",max);
	}
}

int enter()
{
	return rand()%100;
}

int main()
{
	srand(time(0));
	int n,m;
	printf("N ni kiriting: ");
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
	puts("");
	check(n,m,arr);
return 0;
}	
