#include<stdio.h>
struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};
main()
{
	int i;
    struct FoodItem food[3]= 
	{
        {"Pizza",250.50,4.5},
        {"Burger",150.00,4.2},
        {"Biryani",220.00,4.7}
    };
    for(i=0;i<3;i++)
    {
        printf("Item: %s\n",food[i].itemName);
        printf("Price: %.2f\n",food[i].price);
        printf("Rating: %.1f\n\n",food[i].rating);
    }
}
