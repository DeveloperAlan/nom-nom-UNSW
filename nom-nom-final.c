//The Nom-Nom assignment 

//I chose to changed the order of the rules from rare rules that appear in the game to more common ones so that the game can pick up the highest score that has been played in
//in the game. 

#include <stdio.h>

int main(void) {
	//initialize variables
	int numbers[6]; //Array of the numbers entered by user.
	int result = 0; //The score result of the rules
	int answer = 0; //To see if the answer has been collected already and if the numbers inputs are valid
	int rule = 0; //To figure out which rule is being used
	int ansNumber[6]; //For getting the chosen numbers in the formulas for output

	//loop for entering the numbers
	int scan = 0;
	while(scan < 6) {
		scanf("%d", &numbers[scan]);
		scan++;
	}
	
	//checks if the numbers are valid
	int check1 = 0;
	while(check1 < 5) {
		if (numbers[check1] > numbers[check1 + 1]) {
			answer = 2;
		}
		check1++;
	}
	int check2 = 0;
	while(check2 < 6) {
		if (numbers[check2] < 0 || numbers[check2] > 10) {
			answer = 2;
		}
		check2++;
	}

	//calculates result with the rules

	//nom-nom rule
	int nom = 0;
	int arrayPos1 = 1;
	while (arrayPos1 <= 5) {
		int arrayPos2 = 1;
		while (arrayPos2 <= 5) {
			int arrayPos3 = 1;
			while (arrayPos3 <= 5) {
				int arrayPos4 = 1;
				while (arrayPos4 <= 5) {
					int arrayPos5 = 1;
					while (arrayPos5 <= 5) {
						if (numbers[nom] + numbers[nom + arrayPos1] == numbers[nom + arrayPos2] && numbers[nom + arrayPos3] + numbers[nom + arrayPos4] == numbers[nom + arrayPos5] && 
								arrayPos1 != arrayPos2 &&
								arrayPos1 != arrayPos3 && 
								arrayPos1 != arrayPos4 && 
								arrayPos1 != arrayPos5 && 
								arrayPos2 != arrayPos3 && 
								arrayPos2 != arrayPos4 && 
								arrayPos2 != arrayPos5 && 
								arrayPos3 != arrayPos4 && 
								arrayPos3 != arrayPos5 && 
								arrayPos4 != arrayPos5 &&
								answer == 0) {
							result = numbers[nom] + (2 * numbers[nom + arrayPos1]) + (3 * numbers[nom + arrayPos2]) + (4 * numbers[nom + arrayPos3]) + (5 * numbers[nom + arrayPos4]) + (6 * numbers[nom + arrayPos5]);
							answer = 1;
							rule = 16;
							ansNumber[0] = numbers[nom];
							ansNumber[1] = numbers[nom + arrayPos1];
							ansNumber[2] = numbers[nom + arrayPos2];
							ansNumber[3] = numbers[nom + arrayPos3];
							ansNumber[4] = numbers[nom + arrayPos4];
							ansNumber[5] = numbers[nom + arrayPos5];
							break;
						}
						arrayPos5++;
					}
					arrayPos4++;
				}
				arrayPos3++;
			}
			arrayPos2++;
		}
		arrayPos1++;
	}

	// sum-5 rule
	if (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] == numbers[5] && 
			answer == 0) {
		result = numbers[0] + numbers[5] + 49;
		answer = 1;
		rule = 15;
		ansNumber[0] = numbers[0];
		ansNumber[1] = numbers[1];
		ansNumber[2] = numbers[2];
		ansNumber[3] = numbers[3];
		ansNumber[4] = numbers[4];
		ansNumber[5] = numbers[5];
	}

	//sequence-6 rule
	if(numbers[0] + 5 == numbers[1] + 4 && numbers[1] + 4 == numbers[2] + 3 && 
		 numbers[2] + 3 == numbers[3] + 2 && numbers[3] + 2 == numbers[4] + 1 &&
		 numbers[4] + 1 == numbers[5] && answer == 0) {
		result = 6 * numbers[5] + 21;
		answer = 1;
		rule = 11;
		ansNumber[0] = numbers[0];
		ansNumber[1] = numbers[1];
		ansNumber[2] = numbers[2];
		ansNumber[3] = numbers[3];
		ansNumber[4] = numbers[4];
		ansNumber[5] = numbers[5];
	}

	//match-6 rule
	int match6 = 0;
	if(numbers[match6] == numbers[match6 + 5] && answer == 0) {
		result = 6 * numbers[match6] + 27;
		answer = 1;
		rule = 6;
		ansNumber[0] = numbers[match6];
	}

	// sum-4 rule
	// sum41 = Sum 4, Number 1, sum42 = Sum 4, Number 4, etc
	if (answer == 0) {
		int sum41 = 0;
			int sum42 = 1;
			while(sum42 <= 3) {
				int sum43 = 1;
				while(sum43 <= 3) {
					int sum44 = 1;
					while(sum44 <= 3) {
						int sum45 = 1;
						while(sum45 <= 3) {
							if (numbers[sum41] + numbers[sum41 + 1] + numbers[sum41 + 2] + numbers[sum41 + 3] == numbers[sum41 + 4]) {
								result = numbers[sum41] + numbers[sum41 + 4] + 38;
								answer = 1;
								rule = 14;
								ansNumber[0] = numbers[sum41];
								ansNumber[1] = numbers[sum41 + 1];
								ansNumber[2] = numbers[sum41 + 2];
								ansNumber[3] = numbers[sum41 + 3];
								ansNumber[4] = numbers[sum41 + 4];
								break;
							} else if (numbers[sum41] + numbers[sum41 + sum42] + numbers[sum41 + sum43] + numbers[sum41 + sum44] == numbers[sum41 + sum45] && 
									numbers[sum42] != numbers[sum43] &&
									numbers[sum42] != numbers[sum44] &&
									numbers[sum42] != numbers[sum45] &&
									numbers[sum43] != numbers[sum44] &&
									numbers[sum43] != numbers[sum45] &&
									numbers[sum44] != numbers[sum45] ) {
								result = numbers[sum41] + numbers[sum41 + sum45] + 38;
								answer = 1;
								rule = 14;
								ansNumber[0] = numbers[sum41];
								ansNumber[1] = numbers[sum41 + sum42];
								ansNumber[2] = numbers[sum41 + sum43];
								ansNumber[3] = numbers[sum41 + sum44];
								ansNumber[4] = numbers[sum41 + sum45];
								break;
							} 
							sum45++;
						}
						sum44++;
					}
					sum43++;
				} 
				sum42++;
			}
	}

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
							 numbers[seq53] + 2 == numbers[seq54] + 1 && numbers[seq54] + 1 == numbers[seq55] && answer == 0) {
							result = 5 * numbers[seq55] + 20;
							answer = 1;
							rule = 10;
							ansNumber[0] = numbers[seq51];
							ansNumber[1] = numbers[seq52];
							ansNumber[2] = numbers[seq53];
							ansNumber[3] = numbers[seq54];
							ansNumber[4] = numbers[seq55];
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

	//match-5 rule
	int match5 = 0;
	while(match5 < 2) {
		if(numbers[match5] == numbers[match5 + 4] && answer == 0) {
			result = 5 * numbers[match5] + 25;
			answer = 1;
			rule = 5;
			ansNumber[0] = numbers[match5];
			break;
		}
		match5++;
	}

	//sum-3 rule
	//sum31 = Sum 3, Number 1, sum32 = Sum 3, Number 2, etc
	int sum31 = 5;
	while(sum31 >= 0) {
		int sum32 = 5;
		while(sum32 >= 0) {
			int sum33 = 5;
			while(sum33 >= 0) {
				int sum34 = 5;
				while(sum34 >= 0) {
					if(numbers[sum34] + numbers[sum33] + numbers[sum32] == numbers[sum31] && 
						 numbers[sum34] < numbers[sum33] &&
						 numbers[sum33] <= numbers[sum32] && 
						 numbers[sum32] < numbers[sum31] && answer == 0) {
						result = numbers[sum34] + numbers[sum31] + 29;
						answer = 1;
						rule = 13;
						ansNumber[0] = numbers[sum34];
						ansNumber[1] = numbers[sum33];
						ansNumber[2] = numbers[sum32];
						ansNumber[3] = numbers[sum31];
						break;
					}
					sum34--;
				}
				sum33--;
			}
			sum32--;
		}
		sum31--;
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
					if(numbers[seq41] + 3 == numbers[seq42] + 2 && numbers[seq42] + 2 == numbers[seq43] + 1 && numbers[seq43] + 1 == numbers[seq44] && answer == 0) {
						result = 4 * numbers[seq44] + 19;
						answer = 1;
						rule = 9;
						ansNumber[0] = numbers[seq41];
						ansNumber[1] = numbers[seq42];
						ansNumber[2] = numbers[seq43];
						ansNumber[3] = numbers[seq44];
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

	//match-4 rule
	int match4 = 0;
	while(match4 < 3) {
		if (numbers[match4] == numbers[match4 + 3] && answer == 0) {
			result = 4 * numbers[match4] + 23;
			answer = 1;
			rule = 4;
			ansNumber[0] = numbers[match4];
			break; 
		}
		match4++;
	}

	//sequence-3 rule
	//seq31 = Sequence 3, Number 1. seq32 = Sequence 3, Number 2, etc
	int seq31 = 5;
	while (seq31 >= 0) {
		int seq32 = 5;
		while (seq32 >= 0) {
			int seq33 = 5;
			while (seq33 >= 0) {
				if(numbers[seq31] + 2 == numbers[seq32] + 1 && numbers[seq32] + 1 == numbers[seq33] && answer == 0) {
					result = 3 * numbers[seq33] + 18;
					answer = 1;
					rule = 8;
					ansNumber[0] = numbers[seq31];
					ansNumber[1] = numbers[seq32];
					ansNumber[2] = numbers[seq33];
					break;
				}
				seq33--;
			}
			seq32--;
		}
		seq31--;
	}

	//match-3 rule
	int match3 = 0;
	while(match3 < 4) {	
		if(numbers[match3] == numbers[match3 + 2] && answer == 0) {
			result = 3 * numbers[match3] + 21;
			answer = 1;
			rule = 3;
			ansNumber[0] = numbers[match3];
			break;
		}
		match3++;
	}

	//sum-2 rule
	//sum21 = Sum 2, Number 1, sum22 = Sum 2, Number 2, etc
	int sum21 = 5;
	while(sum21 >= 0) {
		int sum22 = 5;
		while(sum22 >= 0) {
			int sum23 = 5;
			while(sum23 >= 0) {
				if(numbers[sum23] + numbers[sum22] == numbers[sum21] && numbers[sum21] != numbers[sum22] && answer == 0) {
					result = numbers[sum23] + numbers[sum21] + 22;
					answer = 1;
					rule = 12;
					ansNumber[0] = numbers[sum23];
					ansNumber[1] = numbers[sum22];
					ansNumber[2] = numbers[sum21];
					break;
				} 
				sum23--;
			}
			sum22--;
		}
		sum21--;
	}

	

	//sequence-2 rule 
	//seq21 = Sequence 2, Number 1. seq22 = Sequence 2, Number 2
	int seq21 = 5;
	while (seq21 >= 0) {
		int seq22 = 5;
		while (seq22 >= 0) {
			if(numbers[seq21] + 1 == numbers[seq22] && answer == 0) {
				result = 2 * numbers[seq22] + 17;
				answer = 1;
				rule = 7;
				ansNumber[0] = numbers[seq21];
				ansNumber[1] = numbers[seq22];
				break;
			}
			seq22--;
		}
		seq21--;
	}

		//total rule
	if(answer == 0) {
		int total = 0;	
		while (total < 6) {
			result += numbers[total];
			total++;
		}
		rule = 1;
		answer = 1;
	}

	//match-2 rule
	int match2 = 0;
	while(match2 < 5) {
		if (numbers[match2] == numbers[match2 + 1] && answer == 0) {
			result = 2 * numbers[match2] + 19;
			answer = 1;
			rule = 2;
			ansNumber[0] = numbers[match2];
			break; 
		}
		match2++;
	}



	//printing feedback to user
	if (answer == 2) {
		printf("Invalid input: 6 integers 1..9 in sorted order must be supplied.");
	} else if (rule == 16) {
		printf("Rule nom-nom(%d+%d=%d, %d+%d=%d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3], ansNumber[4], ansNumber[5]);
	} else if (rule == 15) {
		printf("Rule sum-5(%d+%d+%d+%d+%d=%d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3], ansNumber[4], ansNumber[5]);
	} else if (rule == 14) {
		printf("Rule sum-4(%d+%d+%d+%d=%d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3], ansNumber[4]);
	} else if (rule == 13) {
		printf("Rule sum-3(%d+%d+%d=%d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3]);
	} else if (rule == 12) {
		printf("Rule sum-2(%d+%d=%d) - ", ansNumber[0], ansNumber[1], ansNumber[2]);
	} else if (rule == 11) {
		printf("Rule sequence-6(%d, %d, %d, %d, %d, %d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3], ansNumber[4], ansNumber[5]);
	} else if (rule == 10) {
		printf("Rule sequence-5(%d, %d, %d, %d, %d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3], ansNumber[4]);
	} else if (rule == 9) {
		printf("Rule sequence-4(%d, %d, %d, %d) - ", ansNumber[0], ansNumber[1], ansNumber[2], ansNumber[3]);	
	} else if (rule == 8) {
		printf("Rule sequence-3(%d, %d, %d) - ", ansNumber[0], ansNumber[1], ansNumber[2]);
	} else if (rule == 7) {
		printf("Rule sequence-2(%d, %d) - ", ansNumber[0], ansNumber[1]);
	} else if (rule == 6) {
		printf("Rule match-6(%d) - ", ansNumber[0]);
	} else if (rule == 5) {
		printf("Rule match-5(%d) - ", ansNumber[0]);
	} else if (rule == 4) {
		printf("Rule match-4(%d) - ", ansNumber[0]);
	} else if (rule == 3) {
		printf("Rule match-3(%d) - ", ansNumber[0]);
	} else if (rule == 2) {
		printf("Rule match-2(%d) - ", ansNumber[0]);
	} else {
		printf("Rule total - ");
	}
	if (answer == 1) {
	printf("score %d.\n", result);
	}
	return 0;
}