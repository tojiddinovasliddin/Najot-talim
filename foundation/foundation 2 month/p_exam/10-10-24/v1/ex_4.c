#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check(int a,int b,int ms[a][b])
{
	int sum=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(ms[i][j]%2==0)
			sum+=ms[i][j];
		}

	}
	printf("Toq sonlarning yigindisi: %d",sum);

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
	check(n,m,arr);
}
