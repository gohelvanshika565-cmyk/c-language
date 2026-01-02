#include<stdio.h>
#include<conio.h>
int main()
{
	int temp=0, user, i;
	
	printf("Enter any value:");
	scanf("%d",&user);
	
	for(i=1; i<=user; i++)
	{
		if(user%i==0)
		{
			temp++;
		}
	}
	if(temp==2){
			printf("\nThis number is prime number");
		}
		else{
			printf("\nThis is not prime number");
		}
}
