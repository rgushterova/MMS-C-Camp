#include<stdio.h>
#include<math.h>

int main(){
    int mass,height,bmi;
    printf("Въведете маса [kg] : ");
    scanf("%d",&mass);
    printf("Въведете ръст [m] : ");
    scanf("%d",&height);
    bmi=mass/(pow(height,2));
    printf("Индекс на телесната маса: %d\n",bmi);
    return 0;
}
