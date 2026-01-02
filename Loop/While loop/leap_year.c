#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	
	printf("Enter the first number:");
	scanf("%d",&i);
	printf("Enter the second number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",i);
		i+=4;
	}
	return 0;
}
