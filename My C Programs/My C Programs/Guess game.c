#include <stdio.h>
#include <stdlib.h>
#include <time.h>

        int main()
        {
        	int number,guess,nguesses=1;
        	srand(time(0));
        	number= rand()%100+1;
             	     
        	do { 
        		 printf("Guess the number between 1-100\n");
        		     scanf("%d", &guess);
   
        			if(guess>number)
        		 	{
				 	printf("Lower number please.\t");
				}
					else if (guess<number)
					{
				
					printf("Higher number please.\t");
				}
					else
					{
						printf("You guessed the number in %d attempts.\n", nguesses);
					}
        	        nguesses++;
        	
        	    }
        	    
        	    while(guess!=number);
        	    return 0;
        	    
        	    
			}
        
    
	