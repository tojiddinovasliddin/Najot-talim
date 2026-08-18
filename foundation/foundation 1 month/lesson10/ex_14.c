#include <stdio.h>
int main()
{
	int number,ctn=0;
	printf("soni kirinting: ");
	scanf("%d",&number);
	do
	{
	 number=number  /  10;
	ctn++;
	}
	 while(number>0);
	printf("%d -ta xonali ",ctn);
return 0;
}
