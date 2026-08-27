#include<stdio.h>
main()
{
    FILE *file;
    char song[100];
    int i;

    file=fopen("playlist.txt", "r");

    for(i=0;i<3;i++)
    {
        fgets(song,100,file);
        printf("%s",song);
    }
}
