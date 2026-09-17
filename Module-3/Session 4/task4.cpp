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
protected:
    string channelName;

public:
    void setChannel(string c)
    {
        channelName = c;
    }

    void uploadVideo(string title)
    {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};
main()
{
    GamingYouTuber g;

    g.setData("Krish", 5000);
    g.setChannel("Krish Gaming");

    g.displayProfile();
    g.uploadVideo("GTA 5");
    g.streamGame("BGMI");

}
