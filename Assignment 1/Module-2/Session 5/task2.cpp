#include<stdio.h>
main()
{
    int meal;

    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your choice: ");
    scanf("%d", &meal);

    switch(meal)
    {
        case 1:
            printf("Suggested dish: Dosa");
            break;

        case 2:
            printf("Suggested dish: Biryani");
            break;

        case 3:
            printf("Suggested dish: Pizza");
            break;

        case 4:
            printf("Suggested dish: Samosa");
            break;

        default:
            printf("Try some fruits!");
    }
}
