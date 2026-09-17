#include<iostream>
using namespace std;
struct FoodData
{
    int orderId;
    const char* restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    const char* restaurantName;
    bool isDelivered;

    FoodOrder(FoodData data)
    {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }
    void markDelivered()
    {
        isDelivered = true;
        cout << "Order delivered successfully!";
    }
};
main()
{
    FoodData data = {101, "Pizza House", false};
    FoodOrder order(data);
    order.markDelivered();
}
