#include<iostream>
using namespace std;
class Product
{
    string productName;
    int price;
    float rating;

public:
    Product(string n,int p,float r)
    {
        productName=n;
        price=p;
        rating=r;
    }

    void displayInfo()
    {
        cout <<"\nProduct Name: " << productName;
        cout <<"\nPrice: " << price;
        cout <<"\nRating: " << rating;
    }
};
main()
{
    Product p("Mobile", 15000, 4.5);
    p.displayInfo();
}
