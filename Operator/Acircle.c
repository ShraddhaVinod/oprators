#include <stdio.h>
#define Pi 3.14159 // Define the value of Pi
int main()
{
	float radius,area;
	printf("Enter the radius of circle: ");
	scanf("%f",&radius);
	area=Pi*radius*radius;
	printf("Area of circle=%.2f\n",area);
	return 0;
	}
