#include<iostream>
using namespace std;
class SocialMediaUser
{
    string username;
    int followers;

public:
    void setData(string u, int f)
    {
        username=u;
        followers=f;
    }

    void displayProfile()
    {
        cout <<"\nUsername: "<<username;
        cout <<"\nFollowers: "<<followers;
    }
};
main()
{
    SocialMediaUser user;
    user.setData("Krish", 1000);
    user.displayProfile();
}
