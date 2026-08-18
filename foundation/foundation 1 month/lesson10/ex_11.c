#include <stdio.h>
int main()
{
	int a,b,ctn=0;
	printf("Talabal soni kiriting: ");
	scanf("%d",&a);
	for(int i=1; i<=a;i++)
{
	printf("%d- nichi talabarning yoshini kiritin: ",i);
	scanf("%d",&b);
{
	if(b<20)
	ctn=ctn+1;
}
}
	printf("20 yoshdan kichkina talabalar soni: %d- ta", ctn);
return 0;
}
