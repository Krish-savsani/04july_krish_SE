#include<stdio.h>
int main() 
{
    int minutes[7] = {0};
    int choice;
    int hasData = 0;

    while (1) {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log New Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        if (choice == 1) {
            int total = 0;
            printf("\n--- Enter Minutes for 7 Days ---\n");
            for (int i = 0; i < 7; i++) 
			{
                printf("Enter minutes for Day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }
            hasData = 1;
            printf("Minutes logged successfully!\n");
        } 
        else if (choice == 2)
		{
            if (!hasData) 
			{
                printf("\nNo data logged yet. Please choose Option 1 first.\n");
            } 
			else 
			{
                int total = 0;
                printf("\n--- Weekly Summary ---\n");
                for (int i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                    total += minutes[i];
                }
                printf("\nTotal Listening Time: %d minutes\n", total);
                printf("Average Daily Time: %.2f minutes\n", total / 7.0);
            }
        } 
        else if (choice == 3) 
		{
            printf("\nExiting the app. Goodbye!\n");
            break;
        } 
        else 
		{
            printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
        }
    }
}
