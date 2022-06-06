#include <stdio.h>
#include <math.h>

int main(){
    double mass,height,bmi;
    printf("Vuvedete masa, [kg]: ");
    scanf("%lf",&mass);
    printf("Vuvedete rust,[m]: ");
    scanf("%lf",&height);
    bmi=1.33*(mass/pow(height,2.5));
    printf("Index na telesnata masa: %.2lf",bmi);
    return 0;
}