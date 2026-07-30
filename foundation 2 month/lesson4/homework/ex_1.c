#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return rand()%100;
}
float middle(int *arr, int n)
{
	float mid;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

  	mid=sum / n;
	return mid;
}
int main()
{
	srand(time(0));
	int a;
	printf("Elemenltar soni: ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	}
	middle(arr,a);

	printf("\nOrtacha qiymati: %.2f\n",middle(arr,a));
	return 0;
}

