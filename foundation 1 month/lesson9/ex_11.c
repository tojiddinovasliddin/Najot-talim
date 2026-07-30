#include <stdio.h>
int main()
{
	int i=1,k, n,ctn=0;
	printf("Nechta talabaning yoshini  kiritmoqchisiz: ");
	scanf("%d",&n);
	while(i<=n)
{
	printf("talabarninh  yoshini kiriting: ");
	scanf("%d",&k);
	if(k<20)
{
	ctn++;
}
	i++;
}
	if(ctn>0)
{  
	printf("20 yoshdan kichkina talalarni jami: %d\n",ctn);
}
	else 
{

	puts("20 yoshdan kichkina yoshli talabar yuq\n");
}
	

return 0;
}
