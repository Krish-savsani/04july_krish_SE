#include<iostream>
using namespace std;

class Content
{
    string title;
    string platform;
    int views;
    string status;

public:
    void setData(string t, string p, int v, string s)
    {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};
main()
{
    Content c;

    c.setData("My First Video", "YouTube", 5000, "Published");

    c.display();
}
