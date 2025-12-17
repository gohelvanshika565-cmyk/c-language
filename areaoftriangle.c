#include<stdio.h>
#include<conio.h>
int main()
{
	const float tr=0.5;
	float b,h,area;
	
	printf("Enter the base:");
	scanf("%f",&b);
	printf("Enter the height:");
	scanf("%f",&h);
	
	area=tr*b*h;
	
	printf("The area of triangle is %f",area);
	
	return 0;
	
}
