#include<stdio.h>
#include<conio.h>
int main()
{
	int first, last, sum, no;
	
	printf("Enter a number: ");
    scanf("%d", &no);  //384
    
	last= no%10; //last digit is 4      384%10= 4
	
    while (no >= 10)
    {
        no = no/10; // 384 / 10 =38   , 38 /10 = 3
    }
    
    first = no; //first digit is 3
    
    sum = first + last;  // 4 + 3 = 7
   
    printf("total sum of first and last digit is: %d",sum); 
    
    return 0;
}

