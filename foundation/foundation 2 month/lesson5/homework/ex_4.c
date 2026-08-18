#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int row,int col,int ms[row][col])
{
	for(int j=0;j<row;j++)
	{
	int max=ms[j][0];
		for(int i=0;i<col;i++)
		{

			if(ms[j][i]<max)
			max=ms[j][i];
		}
		printf("Min=%d,",max);
		
	}
}


int main()
{
	int r;
	printf("Row ni kiriting: ");
	scanf("%d",&r);
	int c;
	printf("Coloum ni kiriting: ");
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
