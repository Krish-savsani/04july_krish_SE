#include<stdio.h>
void swapPlaylistCounts(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
main()
{
    int playlist1,playlist2;

    printf("Enter Playlist 1 songs:");
    scanf("%d",&playlist1);

    printf("Enter Playlist 2 songs:");
    scanf("%d",&playlist2);

    swapPlaylistCounts(&playlist1,&playlist2);

    printf("Playlist 1=%d\n",playlist1);
    printf("Playlist 2=%d\n",playlist2);
}
