#include <stdio.h>
void check(int k)
{

	for(int i=2;i<k;i++)
	{
		int cnt=0;

		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
		}
		if(cnt<=2)
		printf("%d ",i);
	}
}


int main()
{
	int n;
	printf("Kiriting: ");
	scanf("%d",&n);
	check(n);
}
