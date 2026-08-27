#include <stdio.h>
main()
{
    float amount;

    printf("Enter cart amount: ");
    scanf("%f", &amount);

    if (amount>2000)
    {
        amount=amount-(amount*20/100);
    }
    else
    {
        if(amount>1000)
        {
            amount=amount-(amount*10/100);
        }
    }
    printf("Final amount = %.2f", amount);

}
