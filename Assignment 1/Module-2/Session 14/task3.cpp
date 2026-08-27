#include<stdio.h>
main() 
{
    double count = 1500;

    if (count >= 1000000) 
	{
        printf("%.1fM\n", count / 1000000);
    } 
    else if (count >= 1000) 
	{
        printf("%.1fK\n", count / 1000);
    } 
    else
	{
        printf("%.0f\n", count);
    }
}
