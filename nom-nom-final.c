#include <stdio.h>

int main(void) {
	//initialize variables
	int numbers[5];
	int result = 0;
	int answer = 0;
	int rule = 0;
	int highNumber = 0;

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

	//match-5 rule
	int match5 = 0;
	while(match5 < 6) {
		if(numbers[match5] == numbers[match5 + 4] && answer != 1) {
			result = 5 * numbers[match5] + 25;
			answer = 1;
			rule = 5;
			highNumber = numbers[match5];
			break;
		}
		match5++;
	}

	//match-4 rule
	int match4 = 0;
	while(match4 < 6) {
		if (numbers[match4] == numbers[match4 + 3] && answer != 1) {
			result = 4 * numbers[match4] + 23;
			answer = 1;
			rule = 4;
			highNumber = numbers[match4];
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
			rule = 3;
			highNumber = numbers[match3];
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
			rule = 2;
			highNumber = numbers[match2];
			break; 
		}
		match2++;
	}
	
	//total rule
	if(answer != 1) {
		int total = 0;	
		while (total < 6) {
			result += numbers[total];
			total++;
		}
		rule = 1;
	}

	//printing feedback to user
	if (rule == 5) {
		printf("Rule match-5(%d) - ", highNumber);
	} else if (rule == 4) {
		printf("Rule match-4(%d) - ", highNumber);
	} else if (rule == 3) {
		printf("Rule match-3(%d) - ", highNumber);
	} else if (rule == 2) {
		printf("Rule match-2(%d) - ", highNumber);
	} else {
		printf("Rule total - ");
	}
	printf("score %d\n", result);
	return 0;
}