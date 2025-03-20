// find the area of a rectangular prism formula : A=2(wl+hl+hw) 

#include<stdio.h>
main()
{
 	  int h,l,w;
	  printf("\n\n\t Enter Height : ");
	  scanf("%d" , &h);
	  printf("\n\n\t Enter Length : ");
	  scanf("%d" , &l);	
	  printf("\n\n\t Enter Width : ");
	  scanf("%d" , &w);	
	  printf("\n\n\t Area of Rectangular Prism : %d" , 2*(w*l+h*l+h*w));	
} 
