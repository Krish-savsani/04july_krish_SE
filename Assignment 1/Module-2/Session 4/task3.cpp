#include <stdio.h>
main() 
{
    int age;
    float orderValue;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter order value: ");
    scanf("%f", &orderValue);

    if (age >= 18 && orderValue > 500) 
	{
        printf("Eligible for Offer");
    } 
	else
	{
        printf("Not Eligible for Offer");
    }
}
