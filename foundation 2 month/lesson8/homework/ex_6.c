#include <stdio.h>
void check(int k)
{
	int sum=0;
	for(int i=1;i<k;i++)
	{
		if(k%i==0)
		sum+=i;
	}
	if(sum==k)
	 puts("True");
	else
	puts("False");
}

int main()
{
	int n;
	printf("kiriting:");
	scanf("%d",&n);
	check(n);
}
