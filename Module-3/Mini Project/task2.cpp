#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int choice;
    string title, platform, status;
    int views;

    do
    {
        cout << "\n--- Creator Dashboard ---" << endl;
        cout << "1. Add Content" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Title: ";
            cin >> title;

            cout << "Enter Platform: ";
            cin >> platform;

            cout << "Enter Views: ";
            cin >> views;

            cout << "Enter Status: ";
            cin >> status;

            ofstream file("content_list.txt", ios::app);

            file << title << " "
                 << platform << " "
                 << views << " "
                 << status << endl;

            file.close();

            cout << "Content saved successfully!" << endl;
        }

    } while(choice != 2);

    cout << "Program closed.";

}
