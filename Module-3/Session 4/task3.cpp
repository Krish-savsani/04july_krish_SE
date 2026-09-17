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
        cout << "\nUsername: "<<username;
        cout << "\nFollowers: "<<followers;
    }
};

class Podcaster : public SocialMediaUser
{
    string podcastName;

public:
    void setPodcast(string p)
    {
        podcastName = p;
    }

    void publishEpisode(string episodeTitle)
    {
        cout<<"\nEpisode "<< episodeTitle<< " published on "<<podcastName;
    }
};
main()
{
    Podcaster p;

    p.setData("Krish",2000);
    p.setPodcast("Tech Talks");

    p.displayProfile();
    p.publishEpisode("Episode 1");

}
