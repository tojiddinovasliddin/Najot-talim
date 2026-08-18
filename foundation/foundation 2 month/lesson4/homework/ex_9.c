#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
void check(int *arr, int n)
{
    int *min = arr;
    int *max = arr;

    for (int i = 1; i < n; i++)
	{
        if (*(arr + i) < *min)
           	{
		 min = arr + i;
		}
        if (*(arr + i) > *max)
        	{    	
		max = arr + i;
    		}
	}
    int temp = *min;
    *min = *max;
    *max = temp;
	printf("\nResult: ");
	for(int i=0;i<n;i++)
	{
	printf("%d,",arr[i]);
	}
}

int main()
{
	srand(time(0));
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	 for (int i = 0; i < n; i++)
	{
	arr[i]=enter();
        printf("%d ", arr[i]);
	}
	 check(arr, n);
	
    return 0;
}
