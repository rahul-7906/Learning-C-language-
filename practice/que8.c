#include <stdio.h>

int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is a Even Number \n",num);
    }else{
        printf("%d is a Odd Number \n",num);
    }

    return 0;
}
