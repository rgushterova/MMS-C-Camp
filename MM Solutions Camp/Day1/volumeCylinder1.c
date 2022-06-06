#include<stdio.h>
#include<math.h>

int main(){
    double radius,height,volume;
    printf("Vuvedete radius v metri: ");
    scanf("%lf",&radius);
    printf("Vuvedete visochina v metri: ");
    scanf("%lf",&height);

    volume=M_PI*pow(radius,2)*height;

    printf("Obem na vodata: %.2lf kubichni metra\n",volume);
    return 0;
}