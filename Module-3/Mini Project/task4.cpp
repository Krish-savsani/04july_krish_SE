#include<iostream>
#include<fstream>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;
};

void displayContent()
{
    ifstream file("content_list.txt");

    Content c;
    int number = 1;

    cout << "\n--- Content List ---" << endl;

    while(file >> c.title >> c.platform >> c.views >> c.status)
    {
        cout << number << ". "
             << c.title << " - "
             << c.platform << " - "
             << c.status << endl;

        number++;
    }

    file.close();
}

void updateStatus()
{
    Content c[100];
    int count = 0;
    int choice;
    string newStatus;

    ifstream file("content_list.txt");

    while(file >> c[count].title
               >> c[count].platform
               >> c[count].views
               >> c[count].status)
    {
        count++;
    }

    file.close();

    displayContent();

    cout << "\nEnter content number: ";
    cin >> choice;

    if(choice >= 1 && choice <= count)
    {
        cout << "Enter new status: ";
        cin >> newStatus;

        c[choice - 1].status = newStatus;

        ofstream outFile("content_list.txt");

        for(int i = 0; i < count; i++)
        {
            outFile << c[i].title << " "
                    << c[i].platform << " "
                    << c[i].views << " "
                    << c[i].status << endl;
        }

        outFile.close();

        cout << "Status updated successfully!" << endl;
    }
    else
    {
        cout << "Invalid content number!" << endl;
    }
}
main()
{
    int choice;

    do
    {
        cout << "\n--- Creator Dashboard ---" << endl;
        cout << "1. Display Content" << endl;
        cout << "2. Update Status" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            displayContent();
        }
        else if(choice == 2)
        {
            updateStatus();
        }

    } while(choice != 3);
}
