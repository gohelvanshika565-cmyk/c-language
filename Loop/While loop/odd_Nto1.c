#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	while(n>=i)
	{
		printf("%d ",n);
		n-=2;
	}
	
	return 0;
}
