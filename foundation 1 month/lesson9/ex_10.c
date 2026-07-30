#include <stdio.h>
int main()
{
         int i=1,k, n=5,sum=0;
	 float s;
         while(i<=n)
{
         printf("Talanalarning yoshini  kiriting: ");
	 scanf("%d", &k);
	 sum=sum+k;
	 s=sum/5.0;
	 i++;
}
	printf("%f",s);
return 0;
 }



