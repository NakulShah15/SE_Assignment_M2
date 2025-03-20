#include<stdio.h>
main()
{
	int r;
	const pi = 3.14;
	printf("\n\n\t Enter Radius :");
	scanf("%d",&r);
	printf("\n\n\t Area of Circle : %d", pi*r*r);
	printf("\n\n\t Circumference of Circle : %d", 2*pi*r);
}
