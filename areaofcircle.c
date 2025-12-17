#include<stdio.h>
#include<conio.h>
int main()
{
	float area,r;
	float pi = 3.14;
	
	printf("Enter value of radius:");
	scanf("%f",&r);
	
	area= pi*r*r;
	printf("The area of circle:%f",area);
	
	return 0;
}
