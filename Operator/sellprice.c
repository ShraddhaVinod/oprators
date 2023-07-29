#include <stdio.h>
int main()
{
	int sp,mrp,dis;
	printf("Enter MRP: ");
	scanf("%d",&mrp);
	printf("Enter discount: ");
	scanf("%d",&dis);
	sp=mrp-dis;
	printf("Selling Price=%d\n",sp);
	return 0;
	}
