#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string song;

    cout << "Enter new song name: ";
    getline(cin, song);

    ofstream file("my_fav_songs.txt", ios::app);

    file << song << endl;

    file.close();

    cout << "Song added successfully.";
}
