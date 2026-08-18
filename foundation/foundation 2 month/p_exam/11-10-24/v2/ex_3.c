#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int enter()
{
	return rand()%100;
}
void  check(int a,int b,int ms[a][b])
{
	int max=INT_MIN;
	puts("");
	for(int i=0;i<a;i++)
	{
		int sum=0;
		for(int j=0;j<b;j++)
		{
			sum+=ms[i][j];
		}
	printf("%d qator yigindisi: %d\n",i,sum);
		if(sum>max)
		max=sum;
	}
	printf("Eng katta yigindi: %d\n",max);
}
int main()
{
	srand(time(0));
	int n,m;
	printf("N va M ni kiriting: ");
	scanf("%d%d",&n,&m);
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
