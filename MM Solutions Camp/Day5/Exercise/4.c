#include<stdio.h>

int main(){
    unsigned int N;
    int res;
    scanf("%u", &N);
    res= - ( ~ N);
    printf("%d\n",res);

    return 0; 

}