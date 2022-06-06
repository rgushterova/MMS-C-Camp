#include <stdio.h>

int main(){
    int A,B,res;
    scanf("%d", &A);
    scanf("%d", &B);

    if( ! (A^B) >=0){
        res=0;
    }else{
        res=1;
    }
    printf("%d\n",res);
    return 0;
}