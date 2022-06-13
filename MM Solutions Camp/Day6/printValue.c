#include<stdio.h>
#include<stdint.h>

#define TINT 1
#define TDOUBLE 2
#define TCHAR 3
#define TFLOAT 4
#define TUINT8 5
#define TUINT16 6
#define TUINT32 7
#define TUINT64 8

void printValue(const void*,uint8_t);

int main(){
    int num=23;
    double dnum=3.14;
    char sym='A';
    float fnum=2.8;

    uint8_t un1=3;
    uint16_t un2=13;
    uint32_t un3=14;
    uint64_t un4=15;
    printValue(&num,TINT);
    printValue(&dnum,TDOUBLE);
    printValue(&sym,TCHAR);
    printValue(&fnum,TFLOAT);
    printValue(&un1,TUINT8);
    printValue(&un2,TUINT16);
    printValue(&un3,TUINT32);
    printValue(&un4,TUINT64);

    return 0;
}

void printValue(const void* valuePtr,uint8_t flag){

    switch(flag){
        case 1:
            printf("Value: %d\n",*(int*)valuePtr);
            break;
        case 2:
            printf("Value: %.2lf\n",*(double*)valuePtr);
            break;
        case 3:
            printf("Value: %c\n",*(char*)valuePtr);
            break;
        case 4:
            printf("Value: %.2f\n",*(float*)valuePtr);
            break;
        case 5:
            printf("Value: %u\n",*(uint8_t*)valuePtr);
            break;
        case 6:
            printf("Value: %u\n",*(uint16_t*)valuePtr);
            break;
        case 7:
            printf("Value: %u\n",*(uint32_t*)valuePtr);
            break;
        case 8:
            printf("Value: %lu\n",*(uint64_t*)valuePtr);
            break;
        
    }
}