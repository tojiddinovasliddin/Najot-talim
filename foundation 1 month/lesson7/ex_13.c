#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	int bola, ota;
	printf("bolaling purini kiriting: ");
	scanf("%d",&bola);
	printf("Otaning pulini kiriting: ");
	scanf("%d",&ota);
	int  total=bola+(ota/2);
	int komputer;
	printf("Komputetning narxi qancha: ");
	scanf("%d",&komputer);
	if (total>=komputer)
{
	puts("yetadi");
}
	else
	puts("Yetmaydi");

return 0;
}
