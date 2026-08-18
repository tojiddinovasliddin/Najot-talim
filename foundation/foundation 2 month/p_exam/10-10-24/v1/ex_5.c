#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check(char arr[],char ch)
{
	int cnt=0;
	for(int i=0;i !='0';i++)
	{
		if(arr[i]==ch)
		cnt++;

	}
	if(cnt>0)
	printf("%c harfi %d marta qatnashgan",ch,cnt);
	else if(cnt==0)
	{
	puts("Siz qidirgan suz topilamdi");
	}
}

int main()
{
	char str[100];
	char find;
	printf("Matni kiriting: ");
	scanf("%[^\n]%*c",str);
	printf("Qaysi harf: ");
	scanf("%c",&find);
	check(str,find);
}
