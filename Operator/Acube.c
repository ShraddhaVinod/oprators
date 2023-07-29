#include <stdio.h>
int main()
{
	int side,lateral,total;
	printf("Enter the side of cube: ");
	scanf("%d",&side);
	lateral=4*side*side;
	total=6*side*side;
	printf("lateral surface area=%d\ntotal surface area=%d\n",lateral,total);
	return 0;
	}
