#include<stdio.h>
#include<stdarg.h>

unsigned bitsNCount(unsigned,unsigned,...);

int main(){

    printf("%u\n",bitsNCount(4,2,0x0a,0xff,0,1));
    printf("%u\n",bitsNCount(3,8,0xff,0x13f1,0xaaaa));
    printf("%u\n",bitsNCount(4,10,0x0a,0xa0ff,0,10,0b1010111110111));
    return 0;
}

unsigned bitsNCount(unsigned count,unsigned bitscnt,...){
    va_list args;
    va_start(args,bitscnt);
    unsigned countMasks=0;
    for(int i=0;i<count;i++){
        __uint64_t mask=va_arg(args,__uint64_t);
        
        unsigned countBits=0;
        for(int i=0;i<64;i++){
            countBits+=(mask & (1UL<<i))>>i;
        }
        
        if (countBits==bitscnt)
        {
            countMasks++;
        }
        
    }
    va_end(args);
    return countMasks;
}