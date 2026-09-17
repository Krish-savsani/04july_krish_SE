#include<iostream>
using namespace std;

class InstaStory
{
protected:
    int storyViews;

public:
    void setViews(int views)
    {
        storyViews = views;
    }
};

class SponsoredStory : public InstaStory
{
public:
    void displayViews()
    {
        cout << "Story Views: " << storyViews << endl;
    }
};
main()
{
    SponsoredStory s;

    s.setViews(5000);

    s.displayViews();
}
