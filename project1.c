#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL)); // Initialization, should only be called once.
    int r = rand() % 10;
    printf("%d", r);

    //TODO: 1. Ask the name of player
    // 2. Greet The player by his/her name
    // 3. Ask the user to guess the number
    // 4. If he succecced then greet him and display the number of guesses
    // 5. If he doesnt success then, allow him to try again
    // 6. if guessNumber is greater then random number, give hint to player --> Lower number please
    // 7. if guessNumber is lower than random number, give hint to player --> higher number please
    char name[10];
    int game, guessNumber;
    int numberOfTry = 0;

    printf("Enter the Name:\n ");
    scanf("%s", &name);

    printf("Welcome  %s \n", name);

    while (game = 1)
    {
        printf("\nGuess the number:\n ");
        scanf("%d", &guessNumber);

        if (guessNumber == r)
        {
            printf("Wow! You rock it...");
            printf("You take %d attempt", numberOfTry);
            break;
        }
        else if (guessNumber > r)
        {
            printf("Lower Number PLease\n");
            printf("Try again");
            numberOfTry += 1;
        }
        else if (guessNumber < r)
        {
            printf("Higher Number PLease\n");
            printf("Try again");
            numberOfTry += 1;
        }
    }
    return 0;
}
