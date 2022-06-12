#include<stdio.h>

unsigned sumArrayDigits(const int*,size_t);

int main(){
    int arr[]={12,34,5,70};
    printf("%u\n",sumArrayDigits(arr,4));
    return 0;
}

unsigned sumArrayDigits(const int* arr,size_t n){
    unsigned sum=0;
    for(int i=0;i<n;i++){
        int number=arr[i];
        while(number>0){
            sum+=number%10;
            number/=10;
        }
    }
    return sum;
}