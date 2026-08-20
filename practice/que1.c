#include <stdio.h>

int main(){
    float bs,da,hra,gs;
    printf("Input your basic salary : ");
    scanf("%f",&bs);

    da = 0.4*bs;
    hra = 0.2*bs;
    gs = bs+da+hra;

    printf("gross salary is %f",gs);
    return 0;
}
