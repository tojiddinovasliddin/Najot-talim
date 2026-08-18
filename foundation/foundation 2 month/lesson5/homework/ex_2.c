#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int row,int col,int ms[row][col])
{
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		if(i==j)
		sum+=ms[i][j];
		}
	}
	printf("Sum: %d",sum);
}

int main()
{
	int r,c;
	printf("Enter row: ");
	scanf("%d",&r);
	printf("Enter col: ");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		arr[i][j]=enter();
		printf("%4d,",arr[i][j]);

		}
	puts("");
	}
	check(r,c,arr);
}
