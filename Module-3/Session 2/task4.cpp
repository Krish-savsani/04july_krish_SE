#include<iostream>
using namespace std;

class Playlist
{
public:
    const char* songs[5];
    int songCount;

    Playlist()
    {
        songCount = 0;
    }
    void addSong(const char* songTitle)
    {
        songs[songCount] = songTitle;
        songCount++;
    }

    void showSongs()
    {
        for (int i = 0; i < songCount; i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};
main()
{
    Playlist p;

    p.addSong("Kesariya");
    p.addSong("Apna Bana Le");
    p.addSong("Tum Hi Ho");

    cout << "Songs List:" << endl;
    p.showSongs();
}
