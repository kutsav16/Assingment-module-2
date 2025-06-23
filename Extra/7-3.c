#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N = 100;
    int number, guess;
    int numberofguess = 0;

    srand(time(NULL));
    number = rand() % N + 1;

    printf("Guess a number between 1 and %d:\n", N);

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numberofguess++;

        if (guess > number) {
            printf("Lower number please!\n");
        } else if (guess < number) {
            printf("Higher number please!\n");
        } else {
            printf("You guessed the number in %d attempts!\n", numberofguess);
            break;
        }

        if (numberofguess >= 10) {
            printf("You lose! The number was %d\n", number);
            break;
        }
    }

    return 0;
}
