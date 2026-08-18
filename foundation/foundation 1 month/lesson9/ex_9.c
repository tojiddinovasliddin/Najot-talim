#include <stdio.h>
int main()
{
	int i=1,k, n=10,sum=0;
	while(i<=n)
{
	printf("Talanalarning ballini  kiriting: ");
	scanf("%d", &k);
	sum=sum+k;
	i++;
}
	printf("%d", sum);
return 0;
}
