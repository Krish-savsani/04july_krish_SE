#include<stdio.h>
main() 
{
    float price, discount, finalPrice;
    int Member;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &Member);

    finalPrice=price-(price*discount/100);

    if (Member == 1) 
	{
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price = %.2f", finalPrice);

}
