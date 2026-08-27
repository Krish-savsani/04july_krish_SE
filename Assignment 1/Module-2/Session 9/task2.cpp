#include<stdio.h>
main()
{
    int playlistRatings[3][5]= 
	{
        {4, 5, 3, 4, 5},
        {5, 4, 5, 3, 4},
        {3, 4, 4, 5, 3}
    };
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",playlistRatings[1][i]);
    }
}
