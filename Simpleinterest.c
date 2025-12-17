#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,n,area;
	int pr=100;
	
	printf("Enter the principal amount:");
	scanf("%d",&p);
	printf("Enter the rate:");
	scanf("%d",&r);
	printf("Time in a month:");
	scanf("%d",&n);
	
	area=p*r*n%pr;
	
	printf("Simple interest is %d",area);
	
	return 0;
}
