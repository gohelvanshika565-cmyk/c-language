#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0, no;
	
	printf("Enter a number: ");
    scanf("%d", &no); // no is = 752
    

    while (no != 0) //752 != 0  
    {
        no = no/10; //  752/10 = 75, 75/10 = 7, 7/10 = 0 stop.
        count++; //1, 2, 3
    }
   
    printf("total count is :%d",count); 
    
    return 0;
}



