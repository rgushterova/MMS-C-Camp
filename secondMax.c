#include<stdio.h>
#include<stdlib.h>

int secondMax(const int*,size_t,int*);
int sortN(const void*,const void*);

int main(){
    int sm;
    int arr[]={12,70,5,70,46};
    
    int res=secondMax(arr,5,&sm);
    
    if(res==0){
        printf("%d\n",sm);
    }else if(res==1){
        fprintf(stderr,"The array is empty!\n");
    }else if(res==-1){
        fprintf(stderr,"The array has only 1 element.\n");
    }else if(res==2){
        fprintf(stderr,"All the elements are equal.\n");
    }
    return 0;
}

int secondMax(const int* arr,size_t n,int* secondMax){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return -1;
    }else{

        int notEqual=0;
    
        for(int i=0;i<n-1;i++){
            if (arr[i]!=arr[i+1])
            {
                notEqual=1;
                break;
            }
                
        }
        if (notEqual)
        {
            int sortedArr[n];
            for (int i = 0; i < n; i++)
            {
                sortedArr[i]=arr[i];
            }
            qsort(sortedArr,n,sizeof(*sortedArr),sortN);
            for(int i=0;i<n;i++){
                if(sortedArr[i]!=sortedArr[i+1]){
                    *secondMax=sortedArr[i+1];
                    break;
                }
            }

            return 0;
        }else{
            return 2;
        }
    }
    
}

int sortN(const void*el1,const void* el2){
    int f=*((int*)el1);
    int s=*((int*)el2);
    if(f<s){
        return 1;
    }
    if(s>f){
        return -1;
    }
    
    return 0;
}