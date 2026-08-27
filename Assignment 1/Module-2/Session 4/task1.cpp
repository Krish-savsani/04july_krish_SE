#include<stdio.h>

float calculateTotal(float itemPrice, int quantity) 
{
    return itemPrice * quantity;
}

int main() 
{
    float itemPrice;
    int quantity;

    printf("Enter item price: ");
    scanf("%f", &itemPrice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill = %.2f", calculateTotal(itemPrice, quantity));

}
