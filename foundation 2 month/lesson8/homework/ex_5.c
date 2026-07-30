#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double enter()
{
	return rand()%100/1.0;
}
void check(double ms[],int n,int i)
{
	if(i == n)
        return ;
	printf("%.2lf ", ms[i]);
	check(ms, n, i + 1);
}
int main()
{
	srand(time(NULL));
	int i, k;
	printf("elementalr soni: ");
	scanf("%d",&k);
	double arr[k];
	for (i=0;i<k;i++)
	{
	arr[i]=enter();
	}
	check(arr,k,0);
	
}
