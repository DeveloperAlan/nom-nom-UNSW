#include <stdio.h>

int main(void) {
	//initialize variables
	int numbers[5]; //Array of the numbers entered by user.
	int result = 0; //The result of the rules
	int answer = 0; //To see if the answer has been collected already
	int rule = 0; //To figure out which rule is being used
	int matchNumber = 0; //For getting the match number in the match formulas
	int seqNumber[5]; //For getting the chosen sequence numbers in the sequence formulas

	//loop for entering the numbers
	int dice = 0;
	while(dice < 6) {
		printf("Enter number %d:\n", dice + 1);
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

	//sequence-5 rule
	//seq51 = Sequence 5, Number 1. seq52 = Sequence 5, Number 2, etc
	int seq51 = 5;
	while (seq51 >= 0) {
		int seq52 = 5;
		while(seq52 >= 0) {
			int seq53 = 5;
			while(seq53 >= 0) {
				int seq54 = 5; 
				while(seq54 >= 0) {
					int seq55 = 5;
					while(seq55 >= 0) {
						if(numbers[seq51] + 4 == numbers[seq52] + 3 && numbers[seq52] + 3 == numbers[seq53] + 2 &&
							 numbers[seq53] + 2 == numbers[seq54] + 1 && numbers[seq54] + 1 == numbers[seq55] && answer != 1) {
							result = 5 * numbers[seq55] + 20;
							answer = 1;
							rule = 10;
							seqNumber[0] = numbers[seq51];
							seqNumber[1] = numbers[seq52];
							seqNumber[2] = numbers[seq53];
							seqNumber[3] = numbers[seq54];
							seqNumber[4] = numbers[seq55];
							break;
						}
						seq55--;
					}
					seq54--;
				}
				seq53--;
			}
			seq52--;
		}
		seq51--;
	}

	//sequence-4 rule
	//seq41 = Sequence 4, Number 1. seq42 = Sequence 4, Number 2, etc
	int seq41 = 5;
	while (seq41 >= 0) {
		int seq42 = 5;
		while (seq42 >= 0) {
			int seq43 = 5;
			while (seq43 >= 0) {
				int seq44 = 5;
				while (seq44 >= 0) {
					if(numbers[seq41] + 3 == numbers[seq42] + 2 && numbers[seq42] + 2 == numbers[seq43] + 1 && numbers[seq43] + 1 == numbers[seq44] && answer != 1) {
						result = 4 * numbers[seq44] + 19;
						answer = 1;
						rule = 9;
						seqNumber[0] = numbers[seq41];
						seqNumber[1] = numbers[seq42];
						seqNumber[2] = numbers[seq43];
						seqNumber[3] = numbers[seq44];
						break; 
					}
					seq44--;
				}
				seq43--;
			}
			seq42--;
		}
		seq41--;
	}	


	//sequence-3 rule
	//seq31 = Sequence 3, Number 1. seq32 = Sequence 3, Number 2, etc
	int seq31 = 5;
	while (seq31 >= 0) {
		int seq32 = 5;
		while (seq32 >= 0) {
			int seq33 = 5;
			while (seq33 >= 0) {
				if(numbers[seq31] + 2 == numbers[seq32] + 1 && numbers[seq32] + 1 == numbers[seq33] && answer != 1) {
					result = 3 * numbers[seq33] + 18;
					answer = 1;
					rule = 8;
					seqNumber[0] = numbers[seq31];
					seqNumber[1] = numbers[seq32];
					seqNumber[2] = numbers[seq33];
					break;
				}
				seq33--;
			}
			seq32--;
		}
		seq31--;
	}


	//sequence-2 rule 
	//seq21 = Sequence 2, Number 1. seq22 = Sequence 2, Number 2
	int seq21 = 5;
	while (seq21 >= 0) {
		int seq22 = 5;
		while (seq22 >= 0) {
			if(numbers[seq21] + 1 == numbers[seq22] && answer != 1) {
				result = 2 * numbers[seq22] + 17;
				answer = 1;
				rule = 7;
				seqNumber[0] = numbers[seq21];
				seqNumber[1] = numbers[seq22];
				break;
			}
			seq22--;
		}
		seq21--;
	}


	//match-6 rule
	int match6 = 0;
	if(numbers[match6] == numbers[match6 + 5] && answer != 1) {
		result = 6 * numbers[match6] + 27;
		answer = 1;
		rule = 6;
		matchNumber = numbers[match6];
	}


	//match-5 rule
	int match5 = 0;
	while(match5 < 6) {
		if(numbers[match5] == numbers[match5 + 4] && answer != 1) {
			result = 5 * numbers[match5] + 25;
			answer = 1;
			rule = 5;
			matchNumber = numbers[match5];
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
			matchNumber = numbers[match4];
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
			matchNumber = numbers[match3];
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
			matchNumber = numbers[match2];
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
		answer = 1;
	}


	//printing feedback to user
	if (rule == 10) {
		printf("Rule sequence-5(%d, %d, %d, %d, %d) - ", seqNumber[0], seqNumber[1], seqNumber[2], seqNumber[3], seqNumber[4]);
	} else if (rule == 9) {
		printf("Rule sequence-4(%d, %d, %d, %d) - ", seqNumber[0], seqNumber[1], seqNumber[2], seqNumber[3]);	
	} else if (rule == 8) {
		printf("Rule sequence-3(%d, %d, %d) - ", seqNumber[0], seqNumber[1], seqNumber[2]);
	} else if (rule == 7) {
		printf("Rule sequence-2(%d, %d) - ", seqNumber[0], seqNumber[1]);
	} else if (rule == 6) {
		printf("Rule match-6(%d) - ", matchNumber);
	} else if (rule == 5) {
		printf("Rule match-5(%d) - ", matchNumber);
	} else if (rule == 4) {
		printf("Rule match-4(%d) - ", matchNumber);
	} else if (rule == 3) {
		printf("Rule match-3(%d) - ", matchNumber);
	} else if (rule == 2) {
		printf("Rule match-2(%d) - ", matchNumber);
	} else {
		printf("Rule total - ");
	}
	printf("score %d\n", result);
	return 0;
}