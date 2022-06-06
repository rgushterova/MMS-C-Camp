#include<stdio.h>

int main(){
    double num1,num2;
    char operation=' ';
    char input;

    while((scanf("%lf",&num1)) != EOF){
        
        scanf("%c",&operation);
        if(operation==' '){
        while(operation ==' '){
            scanf("%c",&operation);
        }
        }


        scanf("%lf",&num2);

        switch(operation)
        {
        case '+':
            printf("%.2lf\n",num1+num2);
            break;
        case '-':
            printf("%.2lf\n",num1-num2);
            break;
        case 'x':
            printf("%.2lf\n",num1*num2);
            break;
        case '/':
            printf("%.2lf\n",num1/num2);
            break;
        
        default:
            fprintf(stderr, "Invalid expression!\n");
            break;
        }
    }

    return 0;

}