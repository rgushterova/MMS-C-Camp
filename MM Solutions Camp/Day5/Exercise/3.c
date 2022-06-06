#include <stdio.h>

int main(){
    unsigned int N,M;
    scanf("%u", &N);
    scanf("%u", &M);
    unsigned int quatient, remainder,mask;
    quatient = N >> M;
    mask=(1 << M) - 1;
    remainder = N & mask;
    printf("Q = %u R =%u\n",quatient,remainder);

    return 0;
}