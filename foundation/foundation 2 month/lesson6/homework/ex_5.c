#include <stdio.h>
#include <stdlib.h>

void check( char ms[],char ms1[])
{
	int i,j;
	int cnt=0;
	for(i=0; ms[i] !='\0';i++)
	{
		for(j=0; ms1[j] !='\0';j++)
		{
		if(ms[i]==ms[j])
		{
		cnt++;
		}
		}
	}
	if(i==cnt)
	printf("Bil xil");
	else
	puts("bir xil emas");
	puts("");

}

int main()
{
	char  str[100];
	char str2[100];
	printf("1 chi so'zni kiriting: ");
	scanf("%[^\n]%*c",str);
        printf("2 chi so'zni kiriting: ");
        scanf("%[^\n]%*c",str2);
	check(str,str2);
}
