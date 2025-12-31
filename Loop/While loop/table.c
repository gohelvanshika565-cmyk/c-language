#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1, user, ans;
	
	printf("Enter your  table number:");
	scanf("%d",&user);
	
	while(i<=10)
	{
//		printf("%d\n",i);
		printf("\n");
		
		ans=user*i;
		printf("%d*%d=%d",user,i,ans);
		i++;
	}
}
