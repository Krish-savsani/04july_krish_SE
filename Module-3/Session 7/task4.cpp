#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string product;
    int price;

    ofstream file("wishlist.txt");

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter Product Name: ";
        cin >> product;

        cout << "Enter Price: ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << "\nWishlist:" << endl;

    while(readFile >> product >> price)
    {
        cout << "Product: " << product
             << "  Price: " << price << endl;
    }

    readFile.close();
}
