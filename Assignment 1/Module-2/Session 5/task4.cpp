#include<stdio.h>
main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nEligible for Driving License");
    }
    else
    {
        printf("\nNot eligible for Driving License");
    }

    if (age >= 21)
    {
        printf("\nEligible for Credit Card");
    }
    else
    {
        printf("\nNot eligible for Credit Card");
    }

    if (age >= 25)
    {
        printf("\nEligible for Car Rental");
    }
    else
    {
        printf("\nNot eligible for Car Rental");
    }

}
