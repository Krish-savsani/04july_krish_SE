#include <iostream>
using namespace std;
class Playlist
{
public:
    char name[50];
    char createdOn[20];
    bool isPublic;

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};
main()
{
    Playlist p;
    p.isPublic = true;
    cout << "First: " << p.isPublic << endl;
    p.togglePublic();
    cout << "After first toggle: " << p.isPublic << endl;
    p.togglePublic();
    cout <<"After second toggle:"<<p.isPublic<<endl;
}
