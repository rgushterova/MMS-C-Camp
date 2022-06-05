#include<stdio.h>

int main(){
    int num,opt;
    printf("1.HEX->DEC\n2.DEC->HEX\n3.OCT->DEC\n4.DEC->OCT\n5.HEX->OCT\n6.OCT->HEX\nEnter option: ");
    scanf("%d",&opt);

    switch (opt)
    {
    case 1:
        scanf("%x",&num);
        printf("%x(16)=%d(10)\n",num,num);
        break;
    case 2:
        scanf("%d",&num);
        printf("%d(10)=%x(16)",num,num);
        break;
    case 3:
        scanf("%o",&num);
        printf("%o(16)=%d(10)",num,num);
        break;
    case 4:
        scanf("%d",&num);
        printf("%d(10)=%o(16)",num,num);
        break;
    case 5:
        scanf("%x",&num);
        printf("%x(16)=%o(8)",num,num);
        break;
    case 6:
        scanf("%o",&num);
        printf("%o(8)=%x(16)",num,num);
        break;
    default:
        fprintf(stderr,"Invalid option!\n");
        return 1;
        break;
    }

    return 0;
}