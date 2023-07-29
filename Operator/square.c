#include <stdio.h>
int main()
{
	int side,Area,perimeter;
	printf("Enter side: ");
	scanf("%d",&side);
	Area=side*side;
	perimeter=4*side;
	printf("Area of square=%d\nperimeter of square=%d",Area,perimeter);
	return 0;
	}
