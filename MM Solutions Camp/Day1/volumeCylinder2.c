#include<stdio.h>
#include<math.h>

int main(){
    double radius,height,length,area,volume;
    printf("Vuvedete radius v metri: ");
    scanf("%lf",&radius);
    printf("Vuvedete visochina v metri: ");
    scanf("%lf",&height);
    printf("Vuvedete duljina v metri: ");
    scanf("%lf",&length);

    double areaOfSector,areaOfTriangle;
    double cosArg=cos((radius-height)/radius);
    areaOfSector=pow(cosArg,-1)*pow(radius,2);
    double powHeight=pow(height,2);
    areaOfTriangle=(radius-height)*sqrt((2*radius*height)-powHeight);

    area=areaOfSector-areaOfTriangle;
    volume=area*length;

    printf("Obem na vodata: %.2lf kubichni metri\n",volume);

    return 0;

}