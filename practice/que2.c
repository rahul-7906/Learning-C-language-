#include <stdio.h>

int main(){
float km,m,cm,ft,inch;

printf("Enter the distance in km :");
scanf("%f",&km);

m = km*1000;
cm = m*100;
inch = cm/2.54;
ft = inch/12;

printf("Distance travelled in m is : %f \n",m);
printf("Distance travelled in cm is : %f \n",cm);
printf("Distance travelled in inch is : %f \n",inch);
printf("Distance travelled in ft is : %f \n",ft);
return 0;
}
