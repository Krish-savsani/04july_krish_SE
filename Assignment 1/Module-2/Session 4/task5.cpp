#include<stdio.h>
main() 
{
    int followerCount;

    printf("Enter followers: ");
    scanf("%d", &followerCount);

    printf("Before: %d\n", followerCount);

    printf("Pre-increment: %d\n", ++followerCount);

    printf("Post-increment: %d\n", followerCount++);

    printf("After: %d\n", followerCount);

}
