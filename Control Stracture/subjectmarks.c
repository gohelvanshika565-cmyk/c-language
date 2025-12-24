#include<stdio.h>
#include<conio.h>
int main()
{
	float eng,maths,sci,Total;
	
	printf("Enter maths marks:");
	scanf("%f", &maths);
	printf("Enter english marks:");
	scanf("%f", &eng);
	printf("Enter science marks:");
	scanf("%f", &sci); 
	
	Total=(maths+eng+sci)/3;
	
	printf("Average Marks: %f",Total);
	return 0;
}
