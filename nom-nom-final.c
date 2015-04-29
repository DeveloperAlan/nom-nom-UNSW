#include <stdio.h>

int main(void) {
	//initialize variables
	int numbers[6]; //Array of the numbers entered by user.
	int result = 0; //The result of the rules
	int answer = 0; //To see if the answer has been collected already
	int rule = 0; //To figure out which rule is being used
	int matchNumber = 0; //For getting the match number in the match formulas
	int seqNumber[6]; //For getting the chosen sequence numbers in the sequence formulas
	int sumNumber[6]; //For getting the chosen sum numbers in the sum and nomformulas

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
	int nom1 = 5;
	while(nom1 >= 0) {
		int nom2 = 5; 
		while(nom2 >= 0) {
			int nom3 = 5;
			while(nom3 >= 0) {
				int nom4 = 5;
				while(nom4 >= 0) {
					int nom5 = 5;
					while(nom5 >= 0) {
						int nom6 = 5;
						while(nom6 >= 0) {
							if (numbers[nom6] + numbers[nom5] == numbers[nom4] && numbers[nom3] + numbers[nom2] == numbers[nom1] && 
									numbers[nom5] > numbers[nom6] &&
									numbers[nom2] > numbers[nom3] &&
									numbers[nom6] != numbers[nom5] &&
									numbers[nom6] != numbers[nom4] &&
									numbers[nom6] != numbers[nom3] &&
									numbers[nom6] != numbers[nom2] && 
									numbers[nom6] != numbers[nom1] &&
									numbers[nom5] != numbers[nom4] &&
									numbers[nom5] != numbers[nom3] &&
									numbers[nom5] != numbers[nom2] &&
									numbers[nom5] != numbers[nom1] &&
									numbers[nom4] != numbers[nom3] &&
									numbers[nom4] != numbers[nom2] &&
									numbers[nom4] != numbers[nom1] &&
									numbers[nom3] != numbers[nom2] &&
									numbers[nom3] != numbers[nom1] &&
									numbers[nom2] != numbers[nom1] &&
									answer == 0) {
								result = numbers[nom6] + (2 * numbers[nom5]) + (3 * numbers[nom4]) + (4 * numbers[nom3]) + (5 * numbers[nom2]) + (6 * numbers[nom1]);
								answer = 1;
								rule = 16;
								sumNumber[0] = numbers[nom6];
								sumNumber[1] = numbers[nom5];
								sumNumber[2] = numbers[nom4];
								sumNumber[3] = numbers[nom3];
								sumNumber[4] = numbers[nom2];
								sumNumber[5] = numbers[nom1];
								break;
							}
							nom6--;
						}
						nom5--;
					}
					nom4--;
				}
				nom3--;
			}
			nom2--;
		}
		nom1--;
	}

	// sum-5 rule
	// sum51 = Sum 5, Number 1, sum52 = Sum 5, Number 5, etc
							if (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] == numbers[5] && 
									answer == 0) {
								result = numbers[0] + numbers[5] + 49;
								answer = 1;
								rule = 15;
								sumNumber[0] = numbers[0];
								sumNumber[1] = numbers[1];
								sumNumber[2] = numbers[2];
								sumNumber[3] = numbers[3];
								sumNumber[4] = numbers[4];
								sumNumber[5] = numbers[5];
	}

	// sum-4 rule
	// sum41 = Sum 4, Number 1, sum42 = Sum 4, Number 4, etc
	int sum41 = 5;
	while(sum41 >= 0) {
		int sum42 = 5;
		while(sum42 >= 0) {
			int sum43 = 5;
			while(sum43 >= 0) {
				int sum44 = 5;
				while(sum44 >= 0) {
					int sum45 = 5;
					while(sum45 >= 0) {
						if (numbers[sum45] + numbers[sum44] + numbers[sum43] + numbers[sum42] == numbers[sum41] && 
								numbers[sum45] < numbers[sum44] &&
								numbers[sum44] <= numbers[sum43] &&
								numbers[sum43] <= numbers[sum42] &&
								numbers[sum42] < numbers[sum41] &&
								answer == 0) {
							result = numbers[sum45] + numbers[sum41] + 38;
							answer = 1;
							rule = 14;
							sumNumber[0] = numbers[sum45];
							sumNumber[1] = numbers[sum44];
							sumNumber[2] = numbers[sum43];
							sumNumber[3] = numbers[sum42];
							sumNumber[4] = numbers[sum41];
							break;
						} 
						sum45--;
					}
					sum44--;
				}
				sum43--;
			} 
			sum42--;
		}
		sum41--;
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
						sumNumber[0] = numbers[sum34];
						sumNumber[1] = numbers[sum33];
						sumNumber[2] = numbers[sum32];
						sumNumber[3] = numbers[sum31];
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
					sumNumber[0] = numbers[sum23];
					sumNumber[1] = numbers[sum22];
					sumNumber[2] = numbers[sum21];
					break;
				} 
				sum23--;
			}
			sum22--;
		}
		sum21--;
	}

	//sequence-6 rule
	//seq61 = Sequence 6, Number 1, seq62 = Sequence 6, Number 2, etc
	int seq61 = 5;
	while(seq61 >= 0) {
		int seq62 = 5;
		while(seq62 >= 0) {
			int seq63 = 5;
			while(seq63 >= 0) {
				int seq64 = 5;
				while(seq64 >= 0) {
					int seq65 = 5;
					while(seq65 >= 0) {
						int seq66 = 5;
						while(seq66 >= 0) {
							if(numbers[seq61] + 5 == numbers[seq62] + 4 && numbers[seq62] + 4 == numbers[seq63] + 3 && 
								 numbers[seq63] + 3 == numbers[seq64] + 2 && numbers[seq64] + 2 == numbers[seq65] + 1 &&
								 numbers[seq65] + 1 == numbers[seq66] && answer == 0) {
								result = 6 * numbers[seq66] + 21;
								answer = 1;
								rule = 11;
								seqNumber[0] = numbers[seq61];
								seqNumber[1] = numbers[seq62];
								seqNumber[2] = numbers[seq63];
								seqNumber[3] = numbers[seq64];
								seqNumber[4] = numbers[seq65];
								seqNumber[5] = numbers[seq66];
								break;
							}
							seq66--;
						}
						seq65--;
					}
					seq64--;
				}
				seq63--;
			}
			seq62--;
		}
		seq61--;
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
					if(numbers[seq41] + 3 == numbers[seq42] + 2 && numbers[seq42] + 2 == numbers[seq43] + 1 && numbers[seq43] + 1 == numbers[seq44] && answer == 0) {
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
				if(numbers[seq31] + 2 == numbers[seq32] + 1 && numbers[seq32] + 1 == numbers[seq33] && answer == 0) {
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
			if(numbers[seq21] + 1 == numbers[seq22] && answer == 0) {
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
	if(numbers[match6] == numbers[match6 + 5] && answer == 0) {
		result = 6 * numbers[match6] + 27;
		answer = 1;
		rule = 6;
		matchNumber = numbers[match6];
	}


	//match-5 rule
	int match5 = 0;
	while(match5 < 6) {
		if(numbers[match5] == numbers[match5 + 4] && answer == 0) {
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
		if (numbers[match4] == numbers[match4 + 3] && answer == 0) {
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
		if(numbers[match3] == numbers[match3 + 2] && answer == 0) {
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
		if (numbers[match2] == numbers[match2 + 1] && answer == 0) {
			result = 2 * numbers[match2] + 19;
			answer = 1;
			rule = 2;
			matchNumber = numbers[match2];
			break; 
		}
		match2++;
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


	//printing feedback to user
	if (answer == 2) {
		printf("Invalid input: 6 integers 1..9 in sorted order must be supplied.");
	} else if (rule == 16) {
		printf("Rule nom-nom(%d+%d=%d, %d+%d=%d) - ", sumNumber[0], sumNumber[1], sumNumber[2], sumNumber[3], sumNumber[4], sumNumber[5]);
	} else if (rule == 15) {
		printf("Rule sum-5(%d+%d+%d+%d+%d=%d) - ", sumNumber[0], sumNumber[1], sumNumber[2], sumNumber[3], sumNumber[4], sumNumber[5]);
	} else if (rule == 14) {
		printf("Rule sum-4(%d+%d+%d+%d=%d) - ", sumNumber[0], sumNumber[1], sumNumber[2], sumNumber[3], sumNumber[4]);
	} else if (rule == 13) {
		printf("Rule sum-3(%d+%d+%d=%d) - ", sumNumber[0], sumNumber[1], sumNumber[2], sumNumber[3]);
	} else if (rule == 12) {
		printf("Rule sum-2(%d+%d=%d) - ", sumNumber[0], sumNumber[1], sumNumber[2]);
	} else if (rule == 11) {
		printf("Rule sequence-6(%d, %d, %d, %d, %d, %d) - ", seqNumber[0], seqNumber[1], seqNumber[2], seqNumber[3], seqNumber[4], seqNumber[5]);
	} else if (rule == 10) {
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
	if (answer == 1) {
	printf("score %d.\n", result);
	}
	return 0;
}