#include <stdio.h>
int main()
{
	int vada,samo,T;
	printf("Enter the no. of Vadapav: ");
	scanf("%d",&vada);
	printf("Enter the no. of Samosa: ");
	scanf("%d",&samo);
	T=vada*12+samo*15;
	printf("Total Bill=%d\n",T);
	return 0;
	}
