#include <stdio.h>
int main()
{
	int n,p,cnt=0;
	printf("Nechta element kiritmoqchiz: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("\nQaysi soni qidilasiz: ");
	scanf("%d",&p);
	for(int i=0;i<n;i++)
	{
	if(arr[i]==p)
	{
	cnt++;
	}
	}
	printf("%d- soni %d marta uchladi",p,cnt);

}
