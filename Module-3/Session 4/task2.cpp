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
        username=u;
        followers=f;
    }

    void displayProfile()
    {
        cout<<"\nUsername: "<<username;
        cout<<"\nFollowers: "<<followers;
    }
};

class YouTuber : public SocialMediaUser
{
    string channelName;

public:
    void setChannel(string c)
    {
        channelName=c;
    }

    void uploadVideo(string title)
    {
        cout<<"\nVideo "<<title<<" uploaded to "<<channelName;
    }
};
main()
{
    YouTuber y;

    y.setData("Krish", 1000);
    y.setChannel("Krish Patel");

    y.displayProfile();
    y.uploadVideo("Funny");
}
