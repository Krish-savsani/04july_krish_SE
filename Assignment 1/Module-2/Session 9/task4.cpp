#include<stdio.h>
main()
{
    int cricketScores[3][2]=
	{
        {180, 165},
        {150, 175},
        {200, 190}
    };
    int i;
    for(i=0;i<3;i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
            printf("%d\n", cricketScores[i][0]);
        else
        printf("%d\n", cricketScores[i][1]);
    }
}
