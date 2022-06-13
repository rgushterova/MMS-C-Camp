#include<stdio.h>


double mySqrt(double);

int main(){
    double n;
    scanf("%lf",&n);
    double res=mySqrt(n);

    if(res<0){
        fprintf(stderr,"The number must be positive.\n");
    }else{
        printf("%lf\n",res);
    }

    //printf("%lf\n",mySqrt(15));
    //printf("%lf\n",mySqrt(18));
    //printf("%lf\n",mySqrt(-25));
    return 0;
}

double mySqrt(double n){
    
    double e=0.000001;
    for(double i=0.0;i<n;i+=e){
        if(n-i*i<e){
            return i;
        }
    }
    return -1;
}