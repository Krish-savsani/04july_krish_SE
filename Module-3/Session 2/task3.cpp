#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    char restaurantName[50];
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
        cout << "\nOrder delivered successfully!";
    }
};
main()
{
    FoodOrder order;

    order.orderId = 101;
    order.isDelivered = false;

    order.markDelivered();
}
