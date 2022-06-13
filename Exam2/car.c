typedef struct Car
{
    char model[21];
    uint8_t maxspeed;
    double price;
} Car;

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