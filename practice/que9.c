#include <stdio.h>

int main(){
    // taking input from user
    int m1,m2,m3,m4,m5,perc;
    printf("Enter marks of 5 subjects : ");
    scanf("%d %d %d %d %d",&m1 ,&m2 ,&m3 ,&m4 ,&m5);

    //calculating percentage
    perc = (m1+m2+m3+m4+m5)/5;
    printf("Percentage is : %d \n",perc);
  
    //giving division
    if(perc >= 60){
        printf("First Division");
    } else if(perc>=50){
        printf("Second Division");
    } else if(perc>=40){
        printf("Third Division");
    } else{
        printf("Fail");
    }
    printf("\n");
    
    return 0;
}
