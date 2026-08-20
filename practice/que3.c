#include <stdio.h>

int main(){
    int m1,m2,m3,m4,m5,aggr;
    float perc;

    printf("Enter marks obtained in 5 subjects :");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    aggr = m1+m2+m3+m4+m5;
    perc = aggr/5.0;
    printf("aggregate marks is :%d \n",aggr);
    printf("percentage is :%f",perc);


    return 0;
}
