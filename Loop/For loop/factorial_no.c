#include<stdio.h>
#include<conio.h>
int main()
{
	int i,no,fact=1;
	
	printf("Enter last factorial number:");
	scanf("%d",&no);
	
	for(i=no; i>=1; i--)
	{
		fact=fact*i;
		
	}
	printf("%d factorial number is %d",no,fact);
}
