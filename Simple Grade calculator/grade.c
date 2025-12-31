#include <stdio.h>
#include <conio.h>

int main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 85 && score <= 100) ? 'A' :
            (score >= 60) ? 'B' :
            (score >= 55) ? 'C' :
            (score >= 35) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);
    
    switch(grade){
    	
    	case 'A':
    		{
    			printf("Excellent work! ");
    			break;
			}
			
		case 'B':
			{
				printf("Well done. ");
				break;
			}
			
		case 'C':
			{
				printf("Good job.");
				break;
			}
			
		case 'D':
			{
				printf("You passed, but you could do batter. ");
				break;
			}
			
		case 'F':
			{
				printf("Sorry, you faild. ");
				break; 
			}
			
		default :
			{
				printf("Rong Choice ");
			}
	}
	
	if(grade >= 'A' && grade <= 'D'){
		printf("You are eligible for the next level.");
	}
	else
	{
		printf("Please try again next time.");
	}

    return 0;
}

