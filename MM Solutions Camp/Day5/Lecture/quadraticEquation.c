#include <stdio.h>
#include <math.h>

int getRoots(double,double,double,double*,double*);

int main(){
    double a,b,c,x1,x2;

    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    int res=getRoots(a,b,c,&x1,&x2);
    if(res==0){
        printf("No real roots.\n");
    }else if(res==1){
        printf("The equation has 1 root.\nX1 = %.2lf\n",x1);
    }else if(res==2){
        printf("X1 = %.2lf\nX2 = %.2lf\n",x1,x2);
    }else{
        fprintf(stderr,"Coefficient a must be possitive number!\n");
    }
    return 0;
}

int getRoots(double a,double b, double c, double *x1,double *x2){
    if(a==0){
        return -1;
    }
    double D=(pow(b,2)) - 4*a*c;
    if(D<0){
        return 0;
    } else if(D==0){
        *x1= -(b/(2*a));
        return 1;
    }
    double sqrtEquation=sqrt((pow(b,2))-(4*a*c));
    *x1=(-b - sqrtEquation)/(2*a);
    *x2=(-b + sqrtEquation)/(2*a);
    return 2;
        
}