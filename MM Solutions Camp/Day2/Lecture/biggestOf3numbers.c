#include<stdio.h>

double getMaxValue(double n,double m)
{
    if(n>m){
        return n;
    }
    return m;
}

int main(){
    double num,maxValue;
    scanf("%lf",&maxValue);
    scanf("%lf",&num);
    maxValue=getMaxValue(num,maxValue);
    
    scanf("%lf",&num);
    maxValue=getMaxValue(num,maxValue);

    printf("Max value: %.2lf\n",maxValue);

    return 0;
    //za chetene ot numbers.txt => ./biggest < numbers.txt
}
