#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int row,int col,int ms[row][col])
{
	int cnt=0;
	int max=ms[0][0];
	puts("");
	for(int i=0;i<row;i++)
	{
		
		for(int j=0;j<col;j++)
		{
			if(ms[i][j]>max)
			{
				max=ms[i][j];
		
			}	
		}
	}
	printf("\nMax=%d\n",max);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(ms[i][j]==max)
			{
				printf("coun=%d",cnt);
				return ;
			}
		cnt++;
		}
	}
}  
int main()
{
	srand(time(0));
	int r,c;
	printf("Enter row: ");
	scanf("%d",&r);
	printf("Enter coloum:");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			arr[i][j]=enter();
			printf("%d,",arr[i][j]);
		}
	puts("");

	}
	check(r,c,arr);
}
