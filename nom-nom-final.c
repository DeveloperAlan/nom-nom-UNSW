#include <stdio.h>

int main(void) {
// 	//initialize variables
// 	int numbers[5];
// 	int dice = 0;
// 	int result = 0;
// 	int answerFound = 0;

// 	// loop for entering the numbers
// 	for (int i = 0; i < 6; i++) {
// 		printf("Enter number %d:\n", i + 1);
// 		scanf("%d", &numbers[i]);
// 	};

// 	//print out the numbers you entered
// 	dice = 0;
// 	printf("You have entered:");
// 	while(dice < 6) {
// 			printf(" %d,", numbers[dice]);
// 			dice++;
// 	};

// 	dice = 0;
// 	//calculates result with the rules	

	
// 	while(dice < 6) {
// 		//match-3 rule
// 		if(numbers[dice] == numbers[dice + 2] && answerFound != 1) {
// 			result = 3 * numbers[dice] + 21;
// 			answerFound = 1;
// 			break;
// 		}
// 	}
	
// 	while(dice < 6) {
// 		//match-2 rule
// 		if (numbers[dice] == numbers[dice + 1] && answerFound != 1) {
// 			result = numbers[dice] + numbers[dice + 1] + 19;
// 			answerFound = 1;
// 			break; 
// 		}
// 	}
		
// 	while (dice < 6) {
// 		//total rule
// 		if(answerFound != 1) {
// 			result += numbers[dice];
// 			dice++; 
// 		}
// 	}
	
// 	printf("The answerFound is: %d\n", result);
// 	return 0;
// }

	//initalize variables
	int dice = 0; //rolling the dice
	int numbers[5]; //array of the numbers
	int result = 0; //result of the calculation
	int answerFound = 0; //seeing if value has already been returned
	int number = 0; //printing numbers from user input
	int total = 0;


	while (dice < 6) {
		printf("Enter number:");
		scanf("%d", &numbers[dice]);
		dice++;
	};

	printf("You have entered:");
	while (number < 6) {
		printf(" %d", numbers[number]);
		number++;
	}


	// dice = 0;
	// while(dice < 6) {
	// 	//match-3 rule
	// 	if(numbers[dice] == numbers[dice + 2] && answerFound != 1) {
	// 		result = 3 * numbers[dice] + 21;
	// 		answerFound = 1;
	// 		break;
	// 	}
	// }

	
	//match-2 rule 
	int match2 = 0;
	while (match2 < 6) {
		if ((numbers[match2] == numbers[match2 + 1]) && answerFound != 1) {
			printf("%d", numbers[match2]);
			result = 2 * numbers[match2] + 19;
			answerFound = 1;
			break;
		} else { 
				break;
			};
	};

	if (answerFound != 1 && numbers[dice])
	//total rule
	if(answerFound != 1) {
	while (total < 6) {
			result += numbers[total];
			total++; 
		};
	};

	printf("The result is %d", result);
}