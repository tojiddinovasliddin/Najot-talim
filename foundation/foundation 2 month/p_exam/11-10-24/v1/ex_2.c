#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
int check(int ms[],int k)
{
	int cnt=0;
	for(int i=0;i<k;i++)
	{	
		ms[i]=enter();
		printf("%4d",ms[i]);
		if(ms[i]%3==0)
		cnt++;
	}
	return cnt;
}

int main()
{
	srand(time(0));
	int n;
	printf("Massivlar soni: ");
	scanf("%d",&n);
	int arr[n];
	printf("\n3 ga karrali sonlarni soni: %d ta",check(arr,n));
}
