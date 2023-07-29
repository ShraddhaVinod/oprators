#include <stdio.h>
int main()
{
	int side,Volume;
	printf("Enter the side of cube= ");
	scanf("%d",&side);
	Volume=side*side*side;
	printf("Volume of cube=%d\n",Volume);
	return 0;
}
