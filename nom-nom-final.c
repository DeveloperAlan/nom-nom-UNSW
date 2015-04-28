#include <stdio.h>

int main(void) {
	//initialize variables
	int numbers[5];
	int result = 0;
	int answer = 0;

	//loop for entering the numbers
	int dice = 0;
	while(dice < 6) {
		printf("Enter number %d:\n", dice);
		scanf("%d", &numbers[dice]);
		dice++;
	}
	
	//print out the numbers you entered
	int number = 0;
	printf("You have entered:");
	while(number < 6) {
		if (number < 5) {
			printf(" %d,", numbers[number]);
		} else {
			printf(" %d\n", numbers[number]);
		};
		number++;
	}
	
	//calculates result with the rules	

	//match-4 rule
	int match4 = 0;
	while(match4 < 6) {
		if (numbers[match4] == numbers[match4 + 3] && answer != 1) {
			result = 4 * numbers[match4] + 23;
			answer = 1;
			break; 
		}
		match4++;
	}

	//match-3 rule
	int match3 = 0;
	while(match3 < 6) {	
		if(numbers[match3] == numbers[match3 + 2] && answer != 1) {
			result = 3 * numbers[match3] + 21;
			answer = 1;
			break;
		}
		match3++;
	}
	
	//match-2 rule
	int match2 = 0;
	while(match2 < 6) {
		if (numbers[match2] == numbers[match2 + 1] && answer != 1) {
			result = 2 * numbers[match2] + 19;
			answer = 1;
			break; 
		}
		match2++;
	}
	
	if(answer != 1) {
		int total = 0;	
		while (total < 6) {
			//total rule
				result += numbers[total];
				total++; 
		}
	}
	
	printf("The answer is: %d\n", result);
	return 0;
}