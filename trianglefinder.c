#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,num3;
	
	printf("First angle:");
	scanf("%d",&num1);
	printf("Second angle:");
	scanf("%d",&num2);
	
	num3=180-(num1+num2);
	
	printf("Third angle:%d",num3);
	return 0;
}
