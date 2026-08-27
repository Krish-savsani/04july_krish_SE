#include<stdio.h>
main() 
{
    int likes;
    int *ptrLikes;

    printf("Enter likes:");
    scanf("%d",&likes);

    ptrLikes = &likes;
    printf("Likes = %d\n",likes);
    printf("Address = %p\n",ptrLikes);
}
