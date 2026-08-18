#include <stdio.h>
	int count(int num)
{
	int ctn =0;
	for(int i=1;i<=num; i++)
{
	if(num % i == 0)
	{ ctn++;
	}
}
	
	return ctn;

}
	int main()
{
	int n;
	printf("Sonni kiriting: ");
	scanf("%d",&n);
	printf("Soning bo'luvchilari: %d -ta ",count(n));
	return 0;
}
