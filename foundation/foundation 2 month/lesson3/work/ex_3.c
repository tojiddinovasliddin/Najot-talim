#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%10;
}

int main()
{
	int n;
	printf("elementlar soni:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	int x;
	 printf("\nX ni kiriting: ");
	 scanf("%d",&x);
	int count=0;
	for(int i=0;i<n;i++)
	{
	if(arr[i]==x)
	count++;
	}
	puts("");
	printf("Count =%d",count);

}

