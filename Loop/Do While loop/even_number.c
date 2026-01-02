#include<stdio.h>
#include<conio.h>
int main()
{
	int i,no;
	
	printf("Enter any number:");
	scanf("%d",&no);
	
	do{
		printf("%d ",i);
		i+=2;
	}while(i<=no);
}
