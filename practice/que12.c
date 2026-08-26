#include <stdio.h>

int main(){
  float otherPay;
  int hour;
  int i =1;

  while(i<=10){
    printf("enter number of hours worked \n");
    scanf("%d",&hour);

    if(hour>40)
        otherPay = (hour-40)*12;
    else
    otherPay = 0;
  
  printf("Hours worked is %d and overtime pay is Rs %f \n",hour,otherPay);
  i++;
}
    return 0;
}
