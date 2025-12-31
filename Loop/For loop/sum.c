#include<stdio.h>
#include<conio.h>
int main()
{
	int i, user, sum=0;
	
	printf("Enetr end point:");
	scanf("%d",&user);
	
	for(i=1; i<=user; i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	
	return 0;
}
