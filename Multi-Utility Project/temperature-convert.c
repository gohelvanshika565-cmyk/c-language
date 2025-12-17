#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	
	printf("The temperature in Celsius:");
	scanf("%f",&c);
	
	f=(9.0/5.0*c)+32;
	
	printf("The temerature in Fahrenheit: %f",f);
	
	return 0;
}
