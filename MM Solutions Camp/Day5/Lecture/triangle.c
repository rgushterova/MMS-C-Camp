#include<stdio.h>
#include<math.h>

int triangle(double a,double b,double c,double *P,double*S);
   /* if(a<=0 || b<=0 || c<=0){
        return -1;
    }
    double cosGama=(pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b);
    double sinXsin=1-(pow(cosGama,2));
    
    double ha=b*(sqrt(sinXsin));
    *P=a+b+c;
    *S=(a*ha)/2;
    return 0;
}
*/

int main(){
    double a,b,c,P,S;


    while ((scanf("%lf",&a)) != EOF){
        scanf("%lf",&b);
        scanf("%lf",&c);
        int res=triangle(a,b,c,&P,&S);
        if(res==0){
            printf("S = %.2lf\nP = %.2lf\n",S,P);
        }else{
            fprintf(stderr,"Invalid triangle sides!\n");
        }
    }
    
    return 0;
}

int triangle(double a,double b, double c, double* P, double* S){
    if(a<=0 || b<=0 || c<=0){
        return -1;
    }
    double cosGama=(pow(a,2)+pow(b,2) - pow(c,2))/(2*a*b);
    double sinXsin=1-(pow(cosGama,2));
    double ha=b*(sqrt(sinXsin));

    *P=a+b+c;
    *S =(a*ha)/2;
    return 0;
}