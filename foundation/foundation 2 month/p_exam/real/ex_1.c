#include <stdlib.h>
#include <stdio.h>
void check(int k)
{
	int cnt=0;
	for(int i=0;i<=k;i++)
	{
		if(k%i==0)
		cnt ++;

	}
	if(cnt>0)
	printf("Cnt = %d",cnt);
	else
	puts("Soning bulovchilar yuq");
}
int main()
{
	int  n;
	printf("N ni kiriting: ");
	scanf("%d",&n);
	check(n);
}
