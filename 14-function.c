#include <stdio.h>
// Function prototype
void printHello();
void printGoodBye();

int main(){
	printHello(); //function call
	printHello();
	printGoodBye();
	return 0;
}
//Function definition
void printHello(){
	printf("Hello \n");
	printf("I am Rahul \n\n");
}

void printGoodBye(){
	printf("Good bye");
}