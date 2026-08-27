#include<stdio.h>
main() 
{
    char user1[50];
    char user2[50];
    int i;

    printf("Enter first username: ");
    scanf("%s", user1);

    printf("Enter second username: ");
    scanf("%s", user2);

    for (i = 0; user1[i] == user2[i]; i++) 
	{
        if (user1[i] == '\0')
		{
            break;
        }
    }
    if (user1[i] == '\0' && user2[i] == '\0') 
	{
        printf("\nThe usernames are identical.\n");
    } 
	else
	{
        printf("\nThe usernames are different.\n");
    }
}
