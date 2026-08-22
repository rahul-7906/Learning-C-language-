#include <stdio.h>

int main(){
    float cp,sp,p,l;
   printf("Enter cost price and selling price : ");
   scanf("%f %f",&cp,&sp);
   if(sp > cp){
    printf("Profit \n");
    p = sp-cp;
    printf("Profit is %f",p);
 }
 else if(cp > sp){
    printf("Loss \n");
    l = cp-sp;
    printf("Loss is %f",l);
    
 }
 else{
    printf("NO profit or loss");
 }

    return 0;
}
