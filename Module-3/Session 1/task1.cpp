#include<stdio.h>
char tasks[5][100];
int count = 0;
main()
{
    int i;
    printf("Enter 5 tasks:\n");

    for (i=0;i<5;i++)
    {
        printf("Enter task %d: ",i+1);
        scanf("%s", tasks[i]);
        count++;
    }
    printf("\nTask List:\n");

    for (i=0;i<count;i++)
    {
        printf("%d. %s\n",i+1,tasks[i]);
    }
}
