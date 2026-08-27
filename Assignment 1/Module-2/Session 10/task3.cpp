#include<stdio.h>
main()
{
    char source[]="Flipkart";
    char shoppingApp[20];
    int i;
    for (i=0;i<9;i++) 
	{
        shoppingApp[i]=source[i];
    }

    printf("\nShopping App:%s",shoppingApp);

}
