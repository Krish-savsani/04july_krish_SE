#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream file("my_fav_songs.txt");

    file << "Believer" << endl;
    file << "Tabahi" << endl;
    file << "Khubasurat" << endl;
    file << "Tu Hi Tu" << endl;
    file << "Tum Hi Hoo" << endl;

    file.close();

    cout << "Songs saved successfully.";
}
