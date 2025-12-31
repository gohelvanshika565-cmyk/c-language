#include<stdio.h>
#include<conio.h>
int main()
{
	int i, user, sum=0;
	
	printf("Enter your last number:");
	scanf("%d",&user);
	
	for(i=1; i<=user; i+=2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("odd numbers total sum is :%d",sum);
	
	return 0;
}
