#include<stdio.h>
#include "car.h"
#
#define COUNT 10
int main()
{
    int opt;
    scanf("%d",&opt);

    int (*getComparator(int))(const*void,const*void);
    srand(time(NULL));
    Car cars[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        randName(cars[i].model);
        cars[i].maxspeed = randUint((uint8_t)100, (uint8_t)300);
        cars[i].price = randDouble(1000.00, 100000.00);
    }

    switch (opt)
    {
    case 1:
        qsort(cars,COUNT,sizeof(cars[0]),cmpModelASC);
        break;
    case 2:
        qsort(cars,COUNT,sizeof(cars[0]),cmpModelDESC);
        break;
    
    default:
        break;
    }

    for (int i = 0; i < COUNT; i++)
    {
        printCar(cars + i);
    }
    return 0;
}