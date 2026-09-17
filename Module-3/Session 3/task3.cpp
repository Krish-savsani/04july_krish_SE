#include<iostream>
using namespace std;
class Movie
{
    string name;
    int year;

public:
    Movie(string n, int y)
    {
        name = n;
        year = y;
    }
    Movie(Movie &m)
    {
        name = m.name;
        year = m.year;
    }

    void display()
    {
        cout<<"\nMovie Name: "<<name;
        cout<<"\nYear: "<<year;
    }
};
main()
{
    string name;
    int year;

    cout<<"\nEnter Movie Name:";
    cin>>name;

    cout<<"\nEnter Movie Year:";
    cin>>year;

    Movie m1(name,year);

    Movie m2(m1);

    cout<<"\nOriginal Movie:";
    m1.display();

    cout<<"\nCopied Movie:";
    m2.display();
}
