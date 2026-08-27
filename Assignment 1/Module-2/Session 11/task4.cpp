#include<stdio.h>
main()
{
    int followers[5]={1000,2000,3000,4000,5000};
    int *ptr=followers,i;

    for(i=0;i<5;i++)
    {
        *(ptr+i)=*(ptr+i)+100;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}
