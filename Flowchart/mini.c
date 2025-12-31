#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	
	if(a<b){
		printf("The minimum value is:%d",a);
	}
	else if(b<c){
		printf("The minimum value is:%d",b);
	}
	else{
		printf("The minimum value is:%d",c);
	}
	
	return 0;
}
