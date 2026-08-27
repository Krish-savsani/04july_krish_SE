#include<stdio.h>
void formatPrice(int price)
{
    if (price >= 1000) 
	{
        printf("%d,%03d\n",price/1000,price%1000);
    } 
	else
	{
        printf("%d\n", price);
    }
}
main()
{
    formatPrice(55999);
    formatPrice(1599);
    formatPrice(299);

}
