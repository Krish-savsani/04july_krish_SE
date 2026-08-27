#include<stdio.h>
void average(int order[])
{
    int i;
    int total = 0;
    for(i=0;i<7;i++)
    {
        total=total+order[i];
    }
    printf("Average=%.2f",total/7.0);
}
main()
{
    int order[7]={200,150,300,250,180,220,400};
    average(order);
}
