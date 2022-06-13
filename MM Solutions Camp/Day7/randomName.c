#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randInt(int,int);
void randomName(char*);

int main(){
    srand(time(NULL));
    char name[24];
    randomName(name);
    for(int i=0;i<10;i++){
        randomName(name);
        printf("%s\n",name);
    }
    
    return 0;
}

int randInt(int min, int max){
    return min + rand() % (max-min+1);
}
void randomName(char*name){
    unsigned index=0;
    name[index]=randInt('A','Z');
    index++;
    int count=1;

    int n=randInt(5,10);
    for(;count<n;count++){
        name[index]=(char)randInt('a','z');
        index++;
    }
    
    name[index]=' ';
    index++;
    name[index++]=(char)randInt('A','Z');

    int i=1;
    n=randInt(5,10);
    for(i;i<n;i++){
        name[index]=(char)randInt('a','z');
        index++;
    }

    name[index]='\0';
    
}