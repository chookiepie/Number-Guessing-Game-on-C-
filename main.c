#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Lets play a little game!!
int main() {
    int number, guess, attempts = 0;

    srand(time(0));

    number = rand() % 100 + 1;

    printf("=== Welcome to the Number Guessing Game! ===\n");
    printf("I have picked a number between 1 and 100. Try to guess it!\n\n");

    // Loop until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try a lower number.\n");
        } else if (guess < number) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("\nCongratulations! You found the number %d in %d attempts!\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}
