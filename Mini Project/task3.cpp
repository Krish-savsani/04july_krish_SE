#include<stdio.h>
main() 
{
    int minutes[7] = {0};
    int choice;

    while (1) 
	{
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log New Listening Minutes (Save to File)\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            FILE *file = fopen("music_log.txt", "w");

            if (file == NULL) 
			{
                printf("Error opening file!\n");
                continue;
            }

            printf("\n--- Enter Minutes for 7 Days ---\n");
            for (int i = 0; i < 7; i++) {
                printf("Enter minutes for Day %d: ", i + 1);
                scanf("%d", &minutes[i]);
                fprintf(file, "%d\n", minutes[i]);
            }

            fclose(file);
            printf("Data saved successfully to music_log.txt!\n");
        } 
        else if (choice == 2) 
		{
            FILE *file = fopen("music_log.txt", "r");

            if (file == NULL) 
			{
                printf("\nNo saved data found! Please log data first.\n");
                continue;
            }

            int total = 0;
            printf("\n--- Weekly Summary (Loaded from File) ---\n");
            for (int i = 0; i < 7; i++) {
                fscanf(file, "%d", &minutes[i]);
                printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                total += minutes[i];
            }

            fclose(file);
            printf("\nTotal Listening Time: %d minutes\n", total);
            printf("Average Daily Time: %.2f minutes\n", total / 7.0);
        } 
        else if (choice == 3) 
		{
            printf("\nExiting the app. Goodbye!\n");
            break;
        } 
        else {
            printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
        }
    }
}
