#include<stdio.h>
#include<math.h>

int main(){
    unsigned int N,nBits;
    scanf("%u",& N);
    printf("%d\n",(int)log2(N)+1);

    /*while(N != 0){
        N=N>>1;
        nBits++;
    }
    printf("%u",nBits);
    */

    return 0;
}