
#include<stdio.h>
#include<math.h>

int reactangle(double w,double h,double *P,double*S);

int main(){
    double w,h,P,S;
    char input;

    while ((scanf("%lf",&w)) != EOF){
        int isValid=0;
        scanf("%c",&input);
        int res=1;
        if(input==' '){
            scanf("%lf",&h);
                res=reactangle(w,h,&P,&S);
                if(res==0){
                    printf("S = %.2lf\nP = %.2lf\n",S,P);
                }
        }

        else if((input != ' ') || (res =! 0)){
            fprintf(stderr,"Invalid reactangle sides!\n");
        }
        
    }
    
    return 0;
}

int reactangle(double w,double h, double* P, double* S){
    if(w<=0 || h<=0 ){
        return -1;
    }
    
    *P=2*(w+h);
    *S =w*h;
    return 0;
}