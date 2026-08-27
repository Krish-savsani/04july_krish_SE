#include<stdio.h>
main() 
{
    int minutes[7];
    int total = 0;
    float average;

    printf("--- Music Listening Logger ---\n\n");

    for (int i = 0; i < 7; i++) 
	{
        printf("Enter listening minutes for Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
        total += minutes[i];
    }

    average = total / 7.0;

    printf("\n--- Weekly Summary ---\n");
    for (int i = 0; i < 7; i++) 
	{
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    printf("\nTotal Listening Time: %d minutes\n", total);
    printf("Average Daily Listening Time: %.2f minutes\n", average);
}
