#include<iostream>
using namespace std;

class SocialMediaUser
{
protected:
    string username;
    int followers;

public:
    void setData(string u, int f)
    {
        username = u;
        followers = f;
    }

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser
{
};

class Podcaster : public SocialMediaUser
{
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};
main()
{
    InstagramInfluencer i;

    i.setData("Krish", 5000);

    i.displayProfile();
    i.postStory("New Video Coming Soon");
}
