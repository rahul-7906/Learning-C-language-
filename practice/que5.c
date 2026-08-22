#include <stdio.h>

int main(){
   int qty;
   float rate,total,dis;

   printf("Enter quantity and rate :");
   scanf("%d %f",&qty,&rate);
   if(qty>1000){
    dis = 10;
   }else{
    dis = 0;
   }

   total = (qty*rate)-(qty*rate*(dis/100));
   printf("Total cost is : %f",total);
    return 0;
}
