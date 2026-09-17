#include<iostream>
using namespace std;

class Flipkart
{
public:

    void searchProduct(string name)
    {
        cout << "Searching for: " << name << endl;
    }

    void searchProduct(string name, string category)
    {
        cout << "Searching for: " << name << endl;
        cout << "Category: " << category << endl;
    }
};
main()
{
    Flipkart f;

    f.searchProduct("Mobile");

    cout << endl;

    f.searchProduct("Mobile", "Electronics");
}
