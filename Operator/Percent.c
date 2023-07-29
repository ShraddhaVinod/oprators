#include <stdio.h>
int main()
{
	float obt,total,per;
	printf("Enter obtained marks: ");
	scanf("%f",&obt);
	printf("Enter Total marks: ");
	scanf("%f",&total);
	per=(obt*100/total);
	printf("Percentage=%f\n",per);
	return 0;
}
