#ifndef _MYCAR_H
#define _MYCAR_H

#include<stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

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

#endif