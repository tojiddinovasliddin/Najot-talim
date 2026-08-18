#include <stdio.h>
int main()
{
	int n,m,sum=0;
	double a;
	printf("Sinfta nechta talaba bor: ");

	scanf("%d",&n);
	for(int i=1; i<=n; i++)
{
	printf("%d -ni yoshini kiriting: ", i);
	scanf("%d",&m);
	sum=sum+m;
}
	a=sum/n;
	printf("Ularning o'rtacha yoshi: %.2lf",a);
return 0;
}
