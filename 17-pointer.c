#include <stdio.h>
int main(){
		int age = 22;
		int *ptr = &age;

//address				
		printf("%p \n",&age);
		printf("%p \n",ptr);
		printf("%p \n",&ptr);
		
// address in integer
       printf("%u \n",&age);
		printf("%u \n",ptr);
		printf("%u \n",&ptr);

//value
       printf("%u \n",age);
		printf("%u \n",*ptr);
		return 0;
}