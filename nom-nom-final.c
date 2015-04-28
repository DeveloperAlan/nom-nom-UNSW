#include <stdio.h>

int main(void) {
	//initialize variables
	int numbers[5];
	int dice = 0;
	int result = 0;
	int answer = 0;

	//loop for entering the numbers
	while(dice < 6) {
		printf("Enter number %d:\n", dice);
		scanf("%d", &numbers[dice]);
		dice++;
	}
	
	//print out the numbers you entered
	dice = 0;
	printf("You have entered:");
	while(dice < 6) {
		if (dice < 5) {
			printf(" %d,", numbers[dice]);
		} else {
			printf(" %d\n", numbers[dice]);
		};
		dice++;
	}
	
	printf("lol");
	dice = 0;
	
	//calculates result with the rules	

	
	while(dice < 6) {
		//match-3 rule
		if(numbers[dice] == numbers[dice + 2] && answer != 1) {
			result = 3 * numbers[dice] + 21;
			answer = 1;
			break;
		}
		dice++
	}
	
	while(dice < 6) {
		//match-2 rule
		if (numbers[dice] == numbers[dice + 1] && answer != 1) {
			result = numbers[dice] + numbers[dice + 1] + 19;
			answer = 1;
			break; 
		}
		dice++;
	}
		
	while (dice < 6) {
		//total rule
		if(answer != 1) {
			result += numbers[dice];
			dice++; 
		}
	}
	
	printf("The answer is: %d\n", result);
	return 0;
}