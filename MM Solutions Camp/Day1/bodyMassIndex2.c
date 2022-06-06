#include <stdio.h>
#include <math.h>

int main(){
    double mass,height,bmi;
    printf("Введете маса, kg]: ");
    scanf("%lf",&mass);
    printf("Введете ръст,[m]: ");
    scanf("%lf",&height);
    bmi=1.33*(mass/pow(height,2.5));
    printf("Индекс на телесната маса: %.2lf",bmi);
    return 0;
}
