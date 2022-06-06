#include<stdio.h>
#include<math.h>

int main(){
    int mass,height,bmi;
    printf("Vuvedete masa [kg] : ");
    scanf("%d",&mass);
    printf("Vuvedete rust [m] : ");
    scanf("%d",&height);
    bmi=mass/(pow(height,2));
    printf("Index na telesnata masa: %d\n",bmi);
    return 0;
}