#include <stdio.h>
int main()
{
	int sum=0;
	int start=2;
	while(start<=20)
{
	sum = start + sum;
	start = start + 2;
}
	printf("%d", sum);
	return 0;
}
