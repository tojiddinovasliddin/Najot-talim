#include <stdio.h>
int main()
{
	int sum=0;
	for(int i=2; i<=20; i=i+2)
{
	printf("%d |",i);
	sum=sum+i;
}
	printf("20 gacha bolgan juft sonlarning yigindisi:%d",sum);
return 0;
}
