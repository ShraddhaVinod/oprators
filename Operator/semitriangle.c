#include <stdio.h>
int main()
{
	int side1,side2,side3,semi;
	printf("Enter side1,side2,side3: ");
	scanf("%d%d%d",&side1,&side2,&side3);
	semi=(side1+side2+side3)/2;
	printf("semiperimeter of triangle=%d\n",semi);
	return 0;
}
