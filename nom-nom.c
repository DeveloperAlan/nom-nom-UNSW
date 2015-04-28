#include <stdio.h>

int main(void) {
//    int number;
//    int row, column;
//    int n1 = 0;
//    int n2 = 0;
//    int n3 = 0;
//    int n4 = 0;
//    int n5 = 0;
//    int n6 = 0;
    int i = 0 ;
    int arrays[6];
    int match = 0;
    int j = 0;
    int k = 0;
    int score = 0;
    int matching = 0;
//    int seq = 0 ;
//    int seq_Count = 0 ;
	int seq_Score = 0;
    int temp = 0;

    // Obtain input

    printf("Enter number: ");

    while(i<6){
        scanf("%d",&arrays[i]);

        i++;    
        }
		
		i = 0;
	//	while(i<6){
	//		if ((arrays[i]>arrays[i+1])||(arrays[i]-9 > 0 )){
	//			printf("Invalid input: 6 integers 1..9 in sorted order must be supplied.");
	//			i = 6;
	//		}
	//		i++;
	//		}
//Scanning the numbers in 
    i = 0;
	
	j = 0;
	match = 0;
    while(j<6) {
//			while(k<6){
            if(arrays[j]==arrays[j+1]){
				if (arrays[j+1]!=arrays[j+2]){
					match = 0;
				}
            //checking out the arrays 
		//	printf("moo");
				match++;
				matching = arrays[j];
				//if( match == 0 ){
			//	matching = arrays[j];
			//	}
               // matching = arrays[j];
			//	if (matching == arrays[j+1]){
			//		matching = arrays[j+1];
					
			//		match++;
				}
			//	else {
			//	match = 0 ;
				// match = 1;
			//	match = match + 1 ;
			//	matching = arrays[k];
			j++; 
				}
			 
		
			
          //  }
			
           
			  
			   //}
        

		int seq_Num2 = 0;
		 k = 0;
		 j = 0;
		 int seq = 0;
		while (k<6) {
			while ((arrays[k+1]-arrays[k]==0||arrays[k+1]-arrays[k]==1)&&(k<6)){
	//			printf("%d\n",k);
				
				if (arrays[k]+1==arrays[k+1]){
					j++;
					//k++;
					
				}
				
				
				printf("j%d\n",j);
				if (j==5){
					seq_Num2= arrays[k+1];
					temp = seq_Num2*6 + 21;
//					printf("Seq_Num5%d\n",arrays[j]);
					seq = 5;
				if(temp > seq_Score){
                        seq_Score = temp;
                    }
				
					
				}
				if (j==4){
					seq_Num2= arrays[k+1];
					temp = seq_Num2*5 + 20;
//					printf("Seq_Num4%d\n",arrays[k]);
					seq = 4;
				if(temp > seq_Score){
                        seq_Score = temp;
                    }
				
				}
				if (j==3){
					seq_Num2= arrays[k+1];
					temp = seq_Num2*4 + 19;
//					printf("Seq_Num3%d\n",arrays[j]);
					seq =3;
				if(temp > seq_Score){
                        seq_Score = temp;
                    }
					if (arrays[k]+1 != arrays[k+1]){
						j=0;
					} 
				}
				if (j==2){
					seq_Num2= arrays[k+1];
					temp = seq_Num2*3 + 18;
//					printf("Seq_Num2%d\n",arrays[j]);
					seq = 2;
				if(temp > seq_Score){
                        seq_Score = temp;
                    }
				
				}
				if (j==1){
					seq_Num2= arrays[k+1];
					temp = seq_Num2*2 + 17;
//					printf("Seq_Num1%d\n",arrays[j]);
//					printf("Seq_Num%d",seq_Num2);
					seq = 1;
					if(temp > seq_Score){
                        seq_Score = temp;
                    }
			//		if ((arrays[k]+1 == arrays[k+1])){
			//			j=0;
			//		} 
					 
				}
				
				if((arrays[k]==arrays[k+1])&&(arrays[k]+1!=arrays[k+1])&&(arrays[k+1]+1!=arrays[k+2])){
					j=0;
			//		printf("FLAG HIT");
				}
				if((arrays[k]+1!=arrays[k+1])&&(arrays[k+2]+1!=arrays[k+2])&&(arrays[k+1]-arrays[k+2]!=0)){
					j=0;
				//	printf("flag hit");
				}
				
			k++;
			}
			k++;
		}

		  printf("seq_Score%d\n",seq_Score);
		
		int sumScore=0;
		
		temp = 0;
		
		
		int y = 0;
		int h = 1;
		int p = 2;
		int e = 3;
		int u = 4;
		int t = 5;
		int sumCounter = 0;
while(t<6){
	while(u<6){	
		while(e<6){
			while (p<6){
				while (h<6){
					while(y<6){
						if((arrays[y]+arrays[h]==arrays[p])&&(p>h)&&(h>y)){
						sumScore = arrays[y] + arrays[p] + 22;
						// printf("Arrays H, Arrays B,Arrays P %d%d%d",arrays[h],arrays[y],arrays[p]);
						if(temp > sumScore){
                        sumScore = temp;
						}
						sumCounter = 2;
						}
					if((arrays[y]+arrays[h]+arrays[p]==arrays[e])&&(e>p)&&(p>h)&&(h>y)){
						sumScore = arrays[y] + arrays[e] + 29;
					    //printf("Y,H,P,E\n %d%d%d%d",arrays[y],arrays[h],arrays[p],arrays[e]);
						if(sumScore > temp){
                        temp = sumScore;		
						}
						sumCounter = 3;
						}
						if((arrays[y]+arrays[h]+arrays[p]+arrays[e]==arrays[u])&&(u>e)&&(e>p)&&(p>h)&&(h>y)){
						sumScore = arrays[y] + arrays[u] + 38;
					    //printf("Y,H,P,E,U\n %d%d%d%d%d",arrays[y],arrays[h],arrays[p],arrays[e],arrays[u]);
						if(sumScore > temp){
                        temp = sumScore;		
						}
						sumCounter = 4;
						}
						
						if((arrays[y]+arrays[h]+arrays[p]+arrays[e]+arrays[u]==arrays[t])&&(t>e)&&(u>e)&&(e>p)&&(p>h)&&(h>y)){
						sumScore = arrays[y] + arrays[t] + 49;
					   // printf("Y,H,P,E,U,T\n %d%d%d%d%d%d",arrays[y],arrays[h],arrays[p],arrays[e],arrays[u],arrays[t]);
						if(sumScore > temp){
                        temp = sumScore;		
						}
						sumCounter = 5;
						}
						
						
						
						
						
						
						
						
						y++	;
						
						

							}
						h++;
						y=0;
						}
						y=0;
						h=1;
						p++;
						}
			
						y = 0;
						h = 1;
						p = 2;
						e++;

				}
						y = 0;
						h = 1;
						p = 2;
						e = 3;
						u++;

			}
						y = 0;
						h = 1;
						p = 2;
						e = 3;
						u = 4;
						t++;	
}
	//THIS IS THE SUM PART OF IT			
				
				//Nom Nom
				t = 2 ;
				u = 1;
				e = 0;
				p = 2;
				h = 1;
				y = 0;
				int nom = 0;
while(t<6){
	while(u<6){	
		while(e<6){
			while (p<6){
				while (h<6){
					while(y<6){
							if((arrays[y]+arrays[h]==arrays[p])&&
                               (arrays[e]+arrays[u]==arrays[t])&&
                               (arrays[h]>arrays[y])&&
                               (arrays[u]>arrays[e])&&
                               (arrays[y]!=arrays[h])&&
                               (arrays[y]!=arrays[p])&&
                               (arrays[y]!=arrays[e])&&(arrays[y]!=arrays[u])&&(arrays[y]!=arrays[t])
								&&(arrays[h]!=arrays[p])&&(arrays[h]!=arrays[e])&&(arrays[h]!=arrays[u])&&(arrays[h]!=arrays[t])&&(arrays[p]!=arrays[e])
								&&(arrays[p]!=arrays[u])&&(arrays[p]!=arrays[t])&&(arrays[e]!=arrays[u])&&(arrays[e]!=arrays[t])&&(arrays[u]!=arrays[t])){
							sumScore = arrays[y]+arrays[h]*2+arrays[p]*3+arrays[e]*4+arrays[u]*5+arrays[t]*6;
							printf("Y,H,P,E,U,T\n %d%d%d%d%d%d",arrays[y],arrays[h],arrays[p],arrays[e],arrays[u],arrays[t]);
							if(sumScore > temp){
							temp = sumScore;	
							}
							nom=1;
							
							}

							y++;
								}
							h++;
							y = 0;
							}
							p++;
							y =0;
							h =1;
							
						}
						y = 0;
						h = 1;
						p = 2;
							e++;
					}
					y = 0;
					h = 1;
					p = 2;
					e = 0;
					u++;
					}
					y = 0;
					h = 1;
					p = 2;
					e = 0;
					u = 1;
					t++;
			}

				
				
				//NOM NOM 
				
				
				
				
				printf("sumScore%d",sumScore);
		if(match == 0){
//      while (i<6){
 //           score = score + arrays[i];
//            i++;
  //          }
            score = arrays[0] + arrays[1] + arrays[2] + arrays[3] + arrays[4] + arrays[5];
			printf("Rule total -  score %d.",score);

        }
        if(match == 1){
        score = matching*2 + 19;
		printf("Rule match-2(%d) - score %d.",matching,score);
        }
        if (match == 2){
        score = matching*3 + 21;
		printf("Rule match-3(%d) - score %d.",matching,score);
        }
        if (match == 3){
        score = matching*4 + 23;
		printf("Rule match-4(%d) - score %d.",matching,score);
        }
        if (match == 4){
        score = matching*5 + 25;
		printf("Rule match-5(%d) - score %d.",matching,score);
        }
        if (match == 5){
        score = matching*6 + 27;
		printf("Rule match-6(%d) - score %d.",matching,score);
        }
		k = 0;
		
		if (seq == 1){
			printf("Rule sequence-2(%d,%d,) - score %d .",arrays[k+1],seq_Num2,seq_Score);
				if (seq == 2){
					printf("Rule sequence-3(%d,%d,%d,) - score %d .",arrays[k],arrays[k+1],seq_Num2,seq_Score);
					if (seq == 3){
							printf("Rule sequence-4(%d,%d,%d,%d) - score %d .",arrays[k-2],arrays[k-1],arrays[k],seq_Num2,seq_Score);
						if (seq == 4){
							printf("Rule sequence-5(%d,%d,%d,%d,%d) - score %d .",arrays[k-3],arrays[k-2],arrays[k-1],arrays[k],seq_Num2,seq_Score);
							if (seq == 5){
					printf("Rule sequence-6(%d,%d,%d,%d,%d,%d,) - score %d.",arrays[k-4],arrays[k-3],arrays[k-2],arrays[k-1],arrays[k],seq_Num2,seq_Score);
							
					
				}
					
				}
					
				}
				}
			
		
		}
		if (sumCounter == 2){
			printf("Rule sum-2(%d+%d=%d) - score %d.",arrays[y],arrays[h],arrays[p],sumScore);
		}
	
		if (sumCounter == 3){
			printf("Rule sum-3(%d+%d+%d=%d) - score %d.",arrays[y],arrays[h],arrays[p],arrays[e],sumScore);
		}
		if (sumCounter == 4){
			printf("Rule sum-4(%d+%d+%d+%d=%d) - score %d.",arrays[y],arrays[h],arrays[p],arrays[e],arrays[u],sumScore);
		}
		if (sumCounter == 5){
			printf("Rule sum-5(%d+%d+%d+%d+%d=%d) - score %d.",arrays[y],arrays[h],arrays[p],arrays[e],arrays[u],arrays[t],sumScore);
		}
		if (nom == 1){
			printf("Rule nom-nom(%d+%d=%d,%d+%d=%d) - score %d.",arrays[y],arrays[h],arrays[p],arrays[e],arrays[u],arrays[t],sumScore);
		}

			
			
			return 0;
}			
			