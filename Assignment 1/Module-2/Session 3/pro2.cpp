#include<stdio.h>
main() 
{
    const float GST=18.0;
    float price,finalPrice;

    printf("Enter Zomato order price: ");
    scanf("%f", &price);

    finalPrice = price + (price * GST / 100);

    printf("Base Price: %.2f\n", price);
    printf("GST: %.2f%%\n", GST);
    printf("Final Price: %.2f\n", finalPrice);

}
