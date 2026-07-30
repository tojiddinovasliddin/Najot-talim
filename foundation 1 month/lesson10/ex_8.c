#include <stdio.h>
int main()
{
	int n, sum=0;
	printf("N - ni kiriting: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
{
	printf("%d |",i);
	sum=sum+i*i;
}
	printf("N - gacha bo'lgan sonlarning kvadrat yigindisi: %d", sum);
return 0;
}
