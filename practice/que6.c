#include <stdio.h>
int main(){
    float bs,hra,da,gs;
    printf("Enter basic salary : ");
    scanf("%f",&bs);
    if(bs<1500){
        hra = 0.1*bs;
        da = 0.9*bs;
    }
    else{
        hra = 500;
        da = 0.98*bs;
    }
   gs = bs+da+hra;
   printf("Gross salary = Rs %f",gs);
    return 0;
}
