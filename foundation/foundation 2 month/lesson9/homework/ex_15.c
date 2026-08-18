#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct televizor
{
    char model[50];
    int size;
    int price;
    bool smart;
};
typedef struct televizor tv;

void check(tv arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i].smart && arr[j].smart)
            {
                if(arr[i].price < arr[j].price)
                {
                    tv check = arr[i];
                    arr[i] = arr[j];
                    arr[j] = check;
                }
            }
        }
    }
}

int main()
{
    tv tel[] ={
	{"Samsung TU7000", 43, 520, true},
        {"LG NanoCell 75", 55, 890, false},
        {"Sony Bravia X75", 50, 730, true},
        {"Artel 43KF5000", 43, 210, false},
        {"Artel 55", 55, 554, false},
        {"Artel Smart", 55, 680, true},
        {"Artel 86", 86, 171, false},
        {"TCL P635", 50, 610, false},
        {"Hisense A6H", 58, 650, true},
        {"Xiaomi Mi TV P1", 55, 600, true}
   	};
    int n = sizeof(tel) / sizeof(tv);
    check(tel, n);
   for(int i = 0; i < n; i++)
    {
        if(tel[i].smart)
        {
            printf("Model:		 %s\n", tel[i].model);
            printf("Size: 		%d dyum\n", tel[i].size);
            printf("Price: 		%d\n", tel[i].price);
            printf("Smart: 		%d\n", tel[i].smart);
            puts("");
        }
    }

    return 0;
}
