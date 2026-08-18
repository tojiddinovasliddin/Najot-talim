#include <stdio.h>
int  alphabet( char c)
{
	int b=0,d,f;
	if(c>= 65 && c<=90)
	{
 	d=c-64;
	return d;
	}
	else if(c>=97 && c<=122) 
	{
	f=c-96;
	return f;
	}
	else 
	return b;

}
int main()
{
	char a;
	printf("Kiriting: ");
	scanf("%c",&a);
	printf("%d",alphabet(a));
	return 0;
}
