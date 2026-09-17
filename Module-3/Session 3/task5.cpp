#include<iostream>
#include<fstream>
using namespace std;
class Playlist
{
    string name;
    
public:
    Playlist(string n)
    {
        name=n;
        cout<<"Playlist created!";
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");
        file << name;
        file.close();
        cout<<"\nPlaylist auto-saved!";
    }
};
main()
{
    string name;
    cout<<"\nEnter Playlist Name: ";
    cin>>name;
    Playlist p(name);
}
