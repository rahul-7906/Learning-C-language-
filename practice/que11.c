#include <stdio.h>

int main(){
   float p,r,t,si;

   int count = 1;
   while(count<=3){
    printf("Enter valuer of p,r,t ");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
    printf("simple interest is %f  \n",si);
   }

    return 0;
}
