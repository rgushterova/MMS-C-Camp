#include<stdio.h>
#include<math.h>

double max(double num1,double num2){
    if(num1>num2){
        return num1;
    }
    return num2;
}

int main(){
    double num1=500.0/5.0,num2=0.0;

    for(int i=0;i<200;i++){
        num2+=0.5;
    }    

   //if(num1==num2){
    
    //if(fabs((num1-num2))<0.01){
    //if(fabs((num1-num2))<0.000001){
    //if(fabs((num1-num2))<0.0001)

    double maxValue=max(num1,num2);
    printf("%lf\n",num1);
    printf("%lf\n",num2);
    printf("%lf\n",maxValue);
    if(fabs((num1-num2))<0.0001*maxValue){
        printf("Equal\n");
    }else{
        printf("Not equal\n");
    }

    return 0;
}