#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter()
{
	return  1+rand()%(20-1+1);
}
void check(int a,int x)
{
	if(a % 2 ==0  && x % 2 ==0)
          {
          puts("true");
          }
          else
          {
         puts("false");
 	  }
}
int main()
{
	int n;
	printf("Elementlar soni: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	arr[i]=enter();
	printf("%d,",arr[i]);
	check(arr[i],n);	
	}
return 0;
}
