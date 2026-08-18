#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int row,int col, int ms[row][col])
{
	puts("");
	for(int i=0;i<row;i++)
	{
	int sum=0;
		for( int j=0;j<col;j++)
		{
		sum=ms[i][j]+sum;	
		}
	printf("%d qatorining yigindisi: %d\n",i,sum);	
	}
}
int main()
{
	int r;
	printf("Rowni kiriting: ");
	scanf("%d",&r);
	int c;
	printf("Coloumni kiriting: ");
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
