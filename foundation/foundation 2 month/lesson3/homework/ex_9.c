#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
int enter()
{
	return -100+rand()%(100-(-100)+1);
}
int main()
{
	srand(time(0));
	int n,cnt=0;
	int max=INT_MAX;
	printf("Nechta element kiritmoqchisz:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d|",arr[i]);
		if( arr[i]%2==0)
		{
			if(arr[i]<max)
			{
			max=arr[i];
			}
		cnt++;
		}
	}	
	printf("\njuft sonlarning jamisi: %d",cnt);

         if (cnt==0)
         {
         printf("\nMustbat son qatnashmagan");
        }
	else  
	{
	printf("\nEng kichkina musbat son : %d", max);
	}
return 0;
}
