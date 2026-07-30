#include <stdio.h>
int  main()
{
	int  lesson,day;
	start:
	printf("\tHafta kuni kiriting:\n ");
	printf("1.Dushanba\n");
	printf("2.Seshanba\n");
	printf("3.Chorshanba\n");
	printf("4.Panshanba\n");
	printf("5.Juma\n");
	printf("6.Shanba\n");
	printf("7.Yakshanba\n");
	scanf("%d",&day);
	switch(day)
{
	one:
	case 1:
	 printf("Siz dushanba kuni tanladiz\n");
         printf("parani tanlang:\n");
	 scanf("%d", &lesson);
	switch(lesson)

{
	case 1:
	printf("Time:         08:00 - 09:20\n");
	printf("Xona:         A-400\n");
	printf("Fan:          Fizika\n");
	printf("Dars turi:    Ma'ruza\n");
	printf("Ustoz:        Asliddin\n");
	break;
	case 2:
	printf("Time:         9:30 - 10:50\n");
	printf("Xona:         A-425\n");
	printf("Fan:          Matematika\n");
	printf("Dars turi:    amaliyot\n");
	printf("Ustoz:        Muxammad\n");
	break;
	case 3:
	printf("Time:         11:00 - 12:20\n");
	printf("Xona:         E-107\n");
	printf("Fan:          Dasturlash\n");
	printf("Dars turi:    amaliyota\n");
	printf("Ustoz:        Daler\n");
	break;
	default:
	printf("Talabarlarda xar kuni 3 kun bor\n");
	goto one;
} break;
         case 2:
          printf("Siz seshanba kuni tanladiz\n");
          printf("parani tanlang: \n");
          scanf("%d",&lesson);
         switch(lesson)
 {
         case 1:
         printf("Time:         08:00 - 09:20\n");
         printf("Xona:         A-123\n");
         printf("Fan:          Adabiyota\n");
         printf("Dars turi:    Ma'ruza\n");
         printf("Ustoz:        Asliddin\n");
         break;
         case 2:
         printf("Time:         9:30 - 10:50\n");
         printf("Xona:         A-425\n");
         printf("Fan:          Matematika\n");
         printf("Dars turi:    amaliyot\n");
         printf("Ustoz:        Muxammad\n");
         break;
         case 3:
         printf("Time:         11:00 - 12:20\n");
         printf("Xona:         E-107\n");
         printf("Fan:          Ingliz tili\n");
         printf("Dars turi:    amaliyota\n");
         printf("Ustoz:        Daler\n");
         break;
         default:
         printf("Talabarlarda xar kuni 3 kun bor\n");
}	break;
         case 3:
          printf("Siz chorshanba kuni tanladiz\n");
          printf("parani tanlang: \n");
          scanf("%d",&lesson);
         switch(lesson)

 {
         case 1:
         printf("Time:         08:00 - 09:20\n");
         printf("Xona:         A-400\n");
         printf("Fan:          Fizika\n");
         printf("Dars turi:    Ma'ruza\n");
         printf("Ustoz:        Asliddin\n");
         break;
         case 2:
         printf("Time:         9:30 - 10:50\n");
         printf("Xona      :   A-425\n");
         printf("Fan:          Matematika\n");
         printf("Dars turi:    amaliyot\n");
         printf("Ustoz:        Muxammad\n");
         break;
         case 3:
         printf("Time:         11:00 - 12:20\n");
         printf("Xona:         E-107\n");
         printf("Fan:          Dasturlash\n");
         printf("Dars turi:    amaliyota\n");
         printf("Ustoz:        Daler\n");
         break;
         default:
         printf("Talabarlarda xar kuni 3 kun bor\n");

}	break;
         case 4:
          printf("Siz panshanba kuni tanladiz\n");
          printf("parani tanlang: \n");
          scanf("%d",&lesson);
         switch(lesson)

{
         case 1:
         printf("Time:         08:00 - 09:20\n");
         printf("Xona:         A-400\n");
         printf("Fan:          Fizika\n");
         printf("Dars turi:    Ma'ruza\n");
         printf("Ustoz:        Asliddin\n");
         break;
         case 2:
         printf("Time:         9:30 - 10:50\n");
         printf("Xona:         A-425\n");
         printf("Fan:          Matematika\n");
         printf("Dars turi:    amaliyot\n");
         printf("Ustoz:        Muxammad\n");
         break;
         case 3:
         printf("Time:         11:00 - 12:20\n");
         printf("Xona:         E-107\n");
         printf("Fan:          Dasturlash\n");
         printf("Dars turi:    amaliyota\n");
         printf("Ustoz:        Daler\n");
         break;
         default:
         printf("Talabarlarda xar kuni 3 kun bor\n");

 }	break;
         case 5:
          printf("Siz juma kuni tanladiz\n");
          printf("parani tanlang\n");
          scanf("%d",&lesson);
          switch(lesson)
 {
         case 1:
         printf("Time:         08:00 - 09:20\n");
         printf("Xona:         A-400\n");
         printf("Fan:          Fizika\n");
         printf("Dars turi:    Ma'ruza\n");
         printf("Ustoz:        Asliddin\n");
         break;
         case 2:
         printf("Time:         9:30 - 10:50\n");
         printf("Xona:         A-425\n");
         printf("Fan:          Matematika\n");
         printf("Dars turi:    amaliyot\n");
         printf("Ustoz:        Muxammad\n");
         break;
         case 3:
         printf("Time:         11:00 - 12:20\n");
         printf("Xona:         E-107\n");
         printf("Fan:          Dasturlash\n");
         printf("Dars turi:    amaliyota\n");
         printf("Ustoz:        Daler\n");
         break;
         default:
         printf("Talabarlarda xar kuni 3 kun bor\n");

} break;
	case 6:
	printf("Shanba kuni dars yuq\n");
	break;
	case 7:
	printf("Yakshanba kuni dars yuq\n");
	break;
	default:
	printf("Bunaqa  amal yuq, boshqadan kiriting\n");
}
	goto start;	
return 0;
}
