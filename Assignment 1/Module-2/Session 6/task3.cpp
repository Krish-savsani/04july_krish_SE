#include<stdio.h>
main() 
{
    int guess;
    int secretSong = 1;

    printf("\n=== GUESS THE SPOTIFY SONG ===");
    printf("\n1. Shape of You");
    printf("\n2. Blinding Lights");
    printf("\n3. Stay");

    do 
	{
        printf("Guess the song number (1-3): ");
        scanf("%d", &guess);

        if (guess != secretSong) 
		{
            printf("\nWrong guess! Try again.");
        }
    } 
	while (guess != secretSong);

    printf("\nCorrect! You guessed the song!");
    return 0;
}
