#include<stdio.h>
#include<conio.h>
int main()
{
	int num=5;
	int sq=num*num;
	
	printf(" ------- \n");
	printf("|	|\n");
	printf("|%dX%d= %d|\n",num,num,sq);
	printf("|	|\n");
	printf(" ------- \n");

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	int num1=12;
	int num2=6;
	int add=num1+num2;
	int sub=num1-num2;
	int mul=num1*num2;
	int div=num1/num2;
	int mod=num1%num2;
	int ans;
	
	printf("Addition of 12 and 6 is 18\n");
	printf("Subtraction of 12 and 6 is 6\n");
	printf("Multiplication of 12 and 6 is 72\n");
	printf("Division of 12 and 6 is 2\n");
	printf("Module of 12 and 6 is 0\n\n");
	
	printf("%d + %d=%d\n",num1,num2,add );
	printf("%d - %d=%d\n",num1,num2,sub );
	printf("%d * %d=%d\n",num1,num2,mul );
	printf("%d / %d=%d\n",num1,num2,div );
	printf("%d %% %d=%d\n",num1,num2,mod );
	
	return 0;
	
}
