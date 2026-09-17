#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
};
main()
{
    Playlist p;

    p.name = "My Songs";
    p.createdOn = "10-09-2026";
    p.isPublic = true;

    cout << "Playlist Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Public: " << p.isPublic << endl;
}
