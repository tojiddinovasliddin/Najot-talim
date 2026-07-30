#include <stdio.h>
#include <string.h>
int check(char ms[],char let)
{
	int cnt=0;
	for(int i=0; ms[i] !='\0';i++)
	{
		if(ms[i]==let)
		cnt++;
	}
	return cnt;
}
int main()
{
	char str[100];
	printf("Kiriting: ");
	scanf("%[^\n]%*c",str);
	char lett;
	printf("Nima qildiyapsiz: ");
	scanf("%c",&lett);
	printf("%c  ushbu matnda %d marta qatnashgan",lett,check(str,lett));

}
