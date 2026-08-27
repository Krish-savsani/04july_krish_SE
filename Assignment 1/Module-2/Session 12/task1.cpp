#include<stdio.h>
struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};
main()
{
    struct Playlist song={"Tum Hi Hoo","Ajit Singh",233};

    printf("Title: %s\n",song.title);
    printf("Artist: %s\n",song.artist);
    printf("Duration: %d seconds\n",song.duration);
}
