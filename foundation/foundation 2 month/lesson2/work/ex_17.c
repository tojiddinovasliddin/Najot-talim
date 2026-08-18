#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}

int main()
{
	srand(time(0));
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	int k;
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
       printf("\nSonni kiriting: ");
	int found =0;
        scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(k==arr[i])	
		found++;
	}
	if(found>0)
	printf("\nYes");
	else
	puts("\nNo");
return 0;
}

