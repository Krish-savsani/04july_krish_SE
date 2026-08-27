#include<stdio.h>
main() 
{
    int choice = 0;
    int teamCount = 3;

    while (choice != 3) 
	{
        printf("\n1. View Favorite Teams");
        printf("\n2. Add Team");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("\n1. GT");
                printf("\n2. MI");
                printf("\n3. CSK");
                for (int i = 4; i <= teamCount; i++) 
				{
                    printf("\n%d. Team %d", i, i);
                }
                break;

            case 2:
                teamCount++;
                printf("\nTeam added!");
                break;

            case 3:
                printf("\nBye!");
                break;

            default:
                printf("\nInvalid choice!");
        }
    }

}
