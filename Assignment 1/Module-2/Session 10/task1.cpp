#include<stdio.h>
main()
{
    char songTitle[]="Tum Hi Hoo";
    int i;
    while(songTitle[i]!='\0')
    {
        i++;
    }
    printf("Length = %d", i);
}
