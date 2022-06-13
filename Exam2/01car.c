#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define COUNT 10

typedef struct Car
{
    char model[21];
    uint8_t maxspeed;
    double price;
} Car;

int randInt(int, int);
uint8_t randUint(uint8_t, uint8_t);
int randDouble(double, double);
char *randName(char *);
void printCar(const Car *);
int cmpModelASC(const void *, const void *);
int cmpModelDESC(const void *, const void *);
int cmpSpeedASC(const void *, const void *);
int cmSpeedDESC(const void *, const void *);
int cmpPriceASC(const void *, const void *);
int cmpPriceDESC(const void *, const void *);
int *getComparator(int)(const void *, const void *);


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
int randInt(int min, int max)
{
    return min + (rand() % max - min + 1);
}
uint8_t randUint(uint8_t min, uint8_t max)
{
    return min + ((uint8_t)rand() % max - min + 1);
}
int randDouble(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}
char *randName(char *model)
{
    unsigned index = 0;
    model[index] = randInt('A', 'Z');
    index++;
    int n = randInt(4, 10);
    for (int i = 0; i < n; i++)
    {
        model[index++] = randInt('a', 'z');
    }
    model[index] = '\0';
    return model;
}
void printCar(const Car *c)
{
    printf("Model: %20s ", c->model);
    printf("Max speed: %3u ", c->maxspeed);
    printf("Price: %8.2lf\n", c->price);
}
int cmpModelASC(const void *cp1, const void *cp2)
{
    Car *c1 = (Car *)cp1;
    Car *c2 = (Car *)cp2;
    return strcmp(c1->model, c2->model);
}
int cmpModelDESC(const void *cp1, const void *cp2)
{
    Car *c1 = (Car *)cp1;
    Car *c2 = (Car *)cp2;
    return strcmp(c2->model, c1->model);
}
int cmpSpeedASC(const void *cp1, const void *cp2)
{
    Car *c1 = (Car *)cp1;
    Car *c2 = (Car *)cp2;
    return c1->maxspeed - c2->maxspeed;
}
int cmSpeedDESC(const void *cp1, const void *cp2)
{
    Car *c1 = (Car *)cp1;
    Car *c2 = (Car *)cp2;
    return c2->maxspeed - c1->maxspeed;
}
int cmpPriceASC(const void *cp1, const void *cp2)
{
    Car *c1 = (Car *)cp1;
    Car *c2 = (Car *)cp2;
    if (fabs(c1->price - c2->price) < 0.0001)
    {
        return 0;
    }
    else if (c1->price > c2->price)
    {
        return 1;
    }
    return -1;
}
int cmpPriceDESC(const void *cp1, const void *cp2){
    Car *c1 = (Car *)cp1;
    Car *c2 = (Car *)cp2;
    if (fabs(c1->price - c2->price) < 0.0001)
    {
        return 0;
    }
    else if (c1->price < c2->price)
    {
        return 1;
    }
    return -1;
}
int *getComparator(int opt)(const void *p1, const void *p2){
     if (opt==1)
     {
        cmpModelASC(p1,p2);
     }else if(opt==2){
        cmpModelDESC(p1,p2);
     }else if(opt==3){
        cmpSpeedASC(p1,p2);
     }else if(opt==4){
        cmSpeedDESC(p1,p2);
     }else if(opt==5){
        cmpPriceASC(p1,p2);
     }else if(opt==6){
        cmpSpeedASC(p1,p2);
     }
     
}