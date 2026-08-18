#include <stdio.h>
int main()
	{
	int i,n;
	printf(" boshlang'ich sonni kiriting: ");
	scanf("%d", &i);
	printf("tugash soni kiriting: ");
	scanf("%d", &n);
	if(i<n)
{
	while(i<=n)
{
	printf("%d |", i);
	i=i+1;
}
}
	else if(i>=n)
{
	while(i>=n)
{
	printf("%d |",i);
	i=i-1;
}
}
	else 
	printf("%d", i);
return 0;
}
