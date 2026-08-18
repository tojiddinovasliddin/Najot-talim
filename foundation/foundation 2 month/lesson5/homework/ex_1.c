 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return  rand()%100;
}
void  check(int row,int coloum, int ms[row][coloum])
{
	int max=ms[0][0];
		for( int i=0;i<row;i++)
		{
			for(int j=0;j<coloum;j++)
			{
			if( ms[i][j]<max)
			max=ms[i][j];
			}
		}
		printf("Min=%d",max);

}

	int main()
{
	srand(time(0));
	int r,c;
	printf("Enter row: " );
	scanf("%d",&r);
	printf("enter col: ");
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
return 0;
}
