#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c, d;
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	printf("Enter four number:");
	scanf("%d",&d);
	
	if(a>b){
		printf("The maximum value is %d",a);
	}
	else if(b>c){
		printf("The maximum value is %d",b);
	}
	else if(c>d){
		printf("The maximum value is %d",c);
	}
	else{
		printf("The maximum value is %d",d);
	}
	return 0;
}
