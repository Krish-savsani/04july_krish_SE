#include<stdio.h>
main()
{
    FILE *file;
    file=fopen("playlist.txt","w");

    fprintf(file, "Tu He Too\n");
    fprintf(file, "Gahera Hua\n");
    fprintf(file, "Tum Hi Hoo\n");

    printf("Songs written to playlist.txt successfully!");
}
