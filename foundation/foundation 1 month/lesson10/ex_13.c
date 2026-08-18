#include <stdio.h>
#include <limits.h>
int main()
{
	int  Min = INT_MAX;
	int son;
	for (int i=1;i<=7;i++)
{
	printf(" %d - nichi soni  kiriting: ", i);
	scanf("%d",&son);;
	if (son<Min)
{
	Min=son;
}
	printf("Eng kichik son: %d\n",Min);
return 0;
}
