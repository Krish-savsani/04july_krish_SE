#include <stdio.h>
main() 
{
    int l,c,s;

    printf("Enter likes: ");
    scanf("%d", &l);

    printf("Enter comments: ");
    scanf("%d", &c);

    printf("Enter shares: ");
    scanf("%d", &s);

    if (l>=1000 || (c>200 && s>=50)) 
	{
        printf("Post is Trending");
    } 
	else 
	{
        printf("Post is Not Trending");
    }
}
