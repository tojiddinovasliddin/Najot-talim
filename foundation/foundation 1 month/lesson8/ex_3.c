#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int  number;
	char tip;
	start:
	printf("\tAxborot o'lchov biliglari\n");
	printf("1.'b'-- bit\n");
	printf("2.'B'-- bayt\n");
	printf("3.'m'--megabayt\n");
	printf("4.'k'--kilobayt\n");
	printf("5.'g'--gegabayt\n");
	printf("Olchov birikni kiriting (12k): ");
	scanf("%d %c",&number,&tip);
	switch(tip)
{
	case 'b': printf("%d bit: %.2lf  bayt\n", number,number/8.); break;
	case 'B': printf("%d bayt:  %d bayt\n",number,number * 1) ; break;
	case 'm': printf("%d megabayt:  %d bayt\n",number, number *  1000000); break;
	case 'k': printf("%d kilobayt: %d bayt\n",number, number * 1024); break;
	case 'g': printf("%d gegabayt: %d bayt\n", number, number * 1000000000); break;
	default: printf("Siz noto'gli malumot kiritingiz\n");
}
	goto start;

return 0;
}
