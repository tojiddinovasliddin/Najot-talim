#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(0));
    int N;
    printf("Elementlar soni: ");
    scanf("%d", &N);
    int ms[N];
    for (int i = 0; i < N; i++)
    {
        ms[i] = rand() % 100;
        printf("%d ", ms[i]);
    }
    int max= 0;
    for (int i = 1; i < N; i++)
    {
        if (ms[i] > ms[max])
            max= i;
    }
    int count = N - (max+1);
    printf("\nMaksimal son = %d", ms[max]);
    printf("\nMaksimal sondan keyingi elementlar soni = %d\n", count);
    return 0;
}
