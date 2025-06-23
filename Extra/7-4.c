#include <stdio.h>

int main()
{
	int N=100,number, guess, numberofguess = 0;

	srand(time(NULL));

	
	number = rand() % N;

	printf("Guess a number between 1 and %d\n",N);
	
		
	 while (guess != number)
    {
		scanf("%d", &guess);
		
		if (guess > number)

		{
			printf("Lower number please!\n");
			numberofguess++;
		}

		
		else if (number > guess)

		{
			printf("Higher number"
				" please!\n");
			numberofguess++;
		}

		else
			printf("You guessed the"
				" number in %d "
				"attempts!\n",
				numberofguess);
				
		if (numberofguess > 9) {
			printf("\nYou Loose!\n");
			break;
		}


	}
}
