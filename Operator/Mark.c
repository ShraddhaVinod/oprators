#include <stdio.h>
int main()
{
	int H,M,E,S,C,Total;
	printf("Enter H,M,E,S,C: ");
	scanf("%d%d%d%d%d",&H,&M,&E,&S,&C);
	Total=H+M+E+S+C;
	printf("Total marks obtained=%d\n",Total);
	return 0;
	}
