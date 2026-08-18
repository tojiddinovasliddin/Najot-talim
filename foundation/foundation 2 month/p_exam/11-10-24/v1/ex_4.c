#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
int check(int n,int m,int ms[n][m])
{
	int sum=0;
	for(int  i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(ms[i][j] % 5==0)
			sum+=ms[i][j];
		}
	}
	return sum;

}
int main()
{
	srand(time(0));
	int a,b;
	printf("A ni kiriting: ");
	scanf("%d",&a);
	printf("B ni kiriting: ");
	scanf("%d",&b);
	int arr[a][b];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			arr[i][j]=enter();
			printf("%5d",arr[i][j]);
		}
		puts("");
	}
	puts("");
	printf("5 ga karrali sonlar yigindisi: %d",check(a,b,arr));
}
