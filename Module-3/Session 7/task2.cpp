#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream file("my_fav_songs.txt");

    string song;

    while(getline(file, song))
    {
        cout << song << endl;
    }

    file.close();
}
