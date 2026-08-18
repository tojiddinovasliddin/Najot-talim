#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int enter()
{
    return -50 + rand() % (50 - (-50) + 1);
}

int main()
{
    srand(time(0));

    int n;
    printf("Nechta element kirtasiz: ");
    scanf("%d", &n);

    int arr[n];

    int juft = 0, toq = 0, musbat = 0, manfiy = 0;

    for (int i = 0; i < n; i++)
    {
        arr[i] = enter();
        printf("%d | ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int a = arr[i];

        if (a % 2 == 0)
        {
            juft++;
        }
        else if (a % 2 == 1 || a % 2 == -1)
        {
            toq++;
        }

        if (a >= 0)
        {
            musbat++;
        }
        else
        {
            manfiy++;
        }
    }

    printf("\nJuft sonlar - %d ta", juft);
    printf("\nToq sonlar - %d ta", toq);
    printf("\nMusbat sonlar - %d ta", musbat);
    printf("\nManfiy sonlar - %d ta", manfiy);

    return 0;
}
