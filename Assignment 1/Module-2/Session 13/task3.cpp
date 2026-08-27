#include<stdio.h>
main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    fprintf(file, "Khubasurat\n");
    fprintf(file, "O Saki\n");
    printf("Two songs added successfully!");
}
