#include<stdio.h>
main() 
{
    char *items[]={"Burger", "Pizza", "Fries"};
    int prices[]={120, 250, 90};
    int total=0;
    int length=sizeof(prices)/sizeof(prices[0]);
    int i;

    for(i=0;i<length;i++) 
	{
        total+=prices[i];
    }

    printf("Total price is: %d\n", total);
}
