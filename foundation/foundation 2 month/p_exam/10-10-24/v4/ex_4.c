#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%10;
}
void check(int ms[],int a,int b)
{
	int n;
	int k[n];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(i>j || i=j || i<j)
			{
				k[n]=ms[i][j];	
			}
		}
		printf("%4d",ms[i]);
	}
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
			printf("%3d",arr[i][j]);
		}
		puts("");
	}

}
