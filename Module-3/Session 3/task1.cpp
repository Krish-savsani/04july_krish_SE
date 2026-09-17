#include<iostream>
using namespace std;
class Playlist
{
    string name;

public:
    Playlist()
    {
        name=" My Favourites";
        cout<<" Welcome to"<<name<<" Playlist....";
    }
};
main()
{
    Playlist p;
}
