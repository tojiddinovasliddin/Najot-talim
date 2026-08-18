#include <stdlib.h>
#include <stdio.h>
void check(int k,int ms[k][k])
{	puts("");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(i<j)
			ms[i][j]=0;
			printf("%4d",ms[i][j]);
			
		}
	puts("");
	}
}
int main()
{
	int n;
	printf("n ni kiriting: ");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		puts("");
	}
	check(n,arr);

}
