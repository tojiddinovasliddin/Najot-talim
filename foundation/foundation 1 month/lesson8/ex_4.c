#include <stdio.h>
int main()
{
	int month;
	start:
	printf("oyning tartib raqamini kiriting: ");
	scanf("%d",&month);
	switch(month)
{
	case 1: puts("Yanvar"); break;
	case 2: puts("Fevlar"); break;
	case 3: puts("Mart"); break;
	case 4: puts("Aprel"); break;
	case 5: puts("May"); break;
	case 6: puts("Iyun"); break;
	case 7 :puts("Iyul"); break;
	case 8: puts("Avgust"); break;
	case 9: puts("Sentabr"); break;
	case 10:puts("Oktabr"); break;
	case 11 :puts("Noyabr"); break;
	case 12: puts("Dekabr"); break;
	default: printf("Bunday raqamda oy yuq");
}
	goto start;
return 0;
} 
