#include <stdio.h>

int main(){
     int age;
     char gender,martialStatus;

     printf("Enter age,gender(M/F),martialStatus(M/U)");
     scanf("%d %c %c",&age,&gender,&martialStatus);
      
     if(martialStatus =='M' || (martialStatus =='U' && gender =='M' && age>30) || (martialStatus=='U' && gender== 'F' && age>25)){
           printf("Driver is insured");
     } else{
        printf("Driver is not insured");
     }
     

    return 0;
}
