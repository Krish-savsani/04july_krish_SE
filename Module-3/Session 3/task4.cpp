#include<iostream>
using namespace std;
class Ticket
{
public:
    ~Ticket()
    {
        cout<<"\nSaving your ticket...";
    }
};
main()
{
    Ticket*t=new Ticket();
    cout<<"\nTicket booked successfully!";
    delete t;
}
