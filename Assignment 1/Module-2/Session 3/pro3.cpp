#include<stdio.h>
main() 
{
    char playlist[50];
    int songs;
    float duration;

    printf("Enter playlist name: ");
    scanf("%s", playlist);

    printf("Enter number of songs: ");
    scanf("%d", &songs);

    printf("Enter average song duration: ");
    scanf("%f", &duration);

    printf("%s %d %.2f\n", playlist, songs, duration);

}
