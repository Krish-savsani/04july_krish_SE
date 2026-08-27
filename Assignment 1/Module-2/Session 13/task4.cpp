#include<stdio.h>
main()
{
    FILE *file;
    char song[100];
    int i;

    file=fopen("playlist.txt","r");

    while(fgets(song,100,file)!=NULL)
    {
        for(i=0;i<100;i++)
        {
            if ((song[i] == 'l' || song[i] == 'L') &&
                (song[i+1] == 'o' || song[i+1] == 'O') &&
                (song[i+2] == 'v' || song[i+2] == 'V') &&
                (song[i+3] == 'e' || song[i+3] == 'E'))
            {
                printf("%s", song);
                break;
            }
        }
    }
}
