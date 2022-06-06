#include<stdio.h>

int main(){
    unsigned int N,P;
    scanf("%u",&N);
    scanf("%u",&P);

    unsigned int mask=1<<(P-1);
    printf("%u", !! (N & mask));

    return 0;
}