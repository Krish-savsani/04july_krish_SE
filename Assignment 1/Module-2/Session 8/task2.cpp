#include<stdio.h>
void addToCart(char cart[5][20])
{
    printf("%s\n", cart[0]);
    printf("%s\n", cart[1]);
}
main()
{
    char cart[5][20]={"Mobile","Laptop"};
    addToCart(cart);
}
