#include<stdio.h>
#include<stdint.h>

//unsigned onesCount(uint64_t);
unsigned onesCount(uint64_t *mask){
    unsigned counter=0;
    
    for(int bit=63;bit>=0;bit--){
        int digit=((*mask &= (1UL<<bit))>>2);
        
        if(digit == 1){
            counter++;
        }
    }
    return counter;
    
}
int main(){
    uint64_t mask;
    scanf("%lu",& mask);

    unsigned counts=onesCount(&mask);
    printf("%u",counts);
    return 0;
}
