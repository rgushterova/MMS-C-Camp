#include<stdio.h>
#include<stdint.h>

int main(){
    uint32_t attendance=0;
    int option,studentNumber;

    int setAttendance(uint32_t*,int);
    int clearAttendance(uint32_t*,int);
    int attendanceA(uint32_t*);
    int changeAttendance(uint32_t*,int);
    while(1){
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d",&option);
        
        
        if(option>=1 && option<=5){
            if(option==1){
                printf("Enter student number: ");
                scanf("%d",&studentNumber);
                if(studentNumber>=1 && studentNumber<=32 ){
                    setAttendance(&attendance,studentNumber);
                }
            }else if(option==2){
                printf("Enter student number: ");
                scanf("%d",&studentNumber);
                if(studentNumber>=1 && studentNumber<=32){
                    clearAttendance(&attendance,studentNumber);
                }
            }else if(option==3){
                attendanceA(&attendance);
            }
            else if(option==4){
                printf("Enter student number: ");
                scanf("%d",&studentNumber);
                if(studentNumber>=1 && studentNumber<=32){
                    changeAttendance(&attendance,studentNumber);
                }
            }
            
            else{
                break;
            }

        }else{
            
            fprintf(stderr,"Invalid option!\n");
            
        }


    }

    return 0;
}

int setAttendance(uint32_t*atendance,int num){
    uint32_t prev=*atendance;
    int bit=num-1;
    prev=(prev | (1<<bit));
    *atendance=prev;
    return 0;
}
int clearAttendance(uint32_t*atendance,int num){
    *atendance=*atendance & (~(1<<(num-1)));
    return 0;
}
int attendanceA(uint32_t*atendance){
    uint32_t mask=*atendance;
    int count=1,i=31;
    for(i;i>=0;i--){
        printf("%d. ->%d ",count, !!(mask=mask & (1<<i)));
        count++;
        printf("\n");
    }
    return 0;
}
int changeAttendance(uint32_t* at,int num){
    uint32_t prev=*at;
    prev=prev ^(1<<(num-1));
    *at=prev;
    return 0;
}