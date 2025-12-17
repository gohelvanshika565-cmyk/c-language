#include<stdio.h>
#include<conio.h>
int main()
{
	float pi=3.14;
	float r,area;
	
	printf("Enter the radius:");
	scanf("%f",&r);
	
	area=2*pi*r;
	
	printf("Perimeter of The Circle is %f",area);
	
	return 0;
}
