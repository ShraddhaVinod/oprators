#include <stdio.h>
int main()
{
	int l,w,Area,perimeter;
	printf("Enter the value of l,w: ");
	scanf("%d%d",&l,&w);
	Area=l*w;
	perimeter=2*(l+w);
	printf("Area of rectangle=%d\nperimeter of rectangle=%d",Area,perimeter);
	return 0;
	}
