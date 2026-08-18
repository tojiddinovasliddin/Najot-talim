#include <stdio.h>
int main()
{
	int n, number,sum=0;
	printf("talabar soni kiriting: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
{
	printf("%d ning talabaning yosh: ",i);
	scanf("%d",&number);
	sum=sum+number;
}
	printf("ularning umumiy yoshi : %d", sum);
}
