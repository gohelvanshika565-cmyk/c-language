#include<stdio.h>
#include<conio.h>
int main()
{
	int gs,bs,hra,da,ta;

	
	printf("Enter base salary:");
	scanf("%d",&bs);
	
	hra=(bs*10)/100;
	da=(bs*5)/100;
	ta=(bs*8)/100;
	gs= bs+hra+da+ta;
	
	printf("HRA=%d%% \n",hra);
	printf("DA=%d%%\n",da);
	printf("TA=%d%%\n",ta);
	printf("Enter your Gross salary:Rs.%d",gs);
	return 0;
	
}
