#include<iostream>
#include<fstream>
using namespace std;

void displayContent()
{
    ifstream file("content_list.txt");

    string title, platform, status;
    int views;
    int number = 1;

    while(file >> title >> platform >> views >> status)
    {
        cout << number << ". "
             << "Title: " << title
             << ", Platform: " << platform << endl;

        number++;
    }

    file.close();
}
main()
{
    displayContent();
}
