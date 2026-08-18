#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int row,int col,int  ms[row][col])
{
	for(int i=0;i<row;i++)
	{
	int sum=0;
	double k;
		for(int j=0;j<col;j++)
		{
			sum+=ms[i][j];
			k=sum*1.0/row;
			
		}
	
	printf("%d qatorning o'rtacha arifmetikasi =%.2lf\n",i,k);
}
	}
int main()
{
	srand(time(0));
	int r, c;
	printf("R va C ni kiriting(RxC:): ");
	scanf("%dx%d",&r,&c);
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

