#include <stdio.h>
//Area of square
int main(){
	float side;
	printf("Enter side");
	scanf("%f" ,&side);
	printf("Area of square is %f\n", side*side);
	

// Area of circle
	float radius;
	printf("Enter radius");
	scanf("%f" ,&radius);
	printf("Area of circle is %f", 3.14* radius*radius);
	return 0;
}