#include <iostream>
#include "Music.h"

using namespace std;

int main()
{
    int choice = 0;
    string name;
    Music m(10);
    //Song playlist[20];

    cout << "Welcome!" <<endl;

    while(choice < 7){
    cout<<" "<<endl;
    cout << "Choose one of the following:" << endl;
    cout << "1. Add a song to your favorite playlist" << endl;
    cout << "2. Print your playlist" << endl;
    cout << "3. Add a song to up next" << endl;
    cout << "4. Play song" <<endl;
    cout << "5. Check out which songs are coming up next" <<endl;
    cout << "6. Search your playlist for a song" <<endl;
    cout << "7. Exit" <<endl;
    cin>>choice;
    string junk;
    getline(cin, junk);

    if(choice == 1)
    {
        //string name;
        cout << "Enter the title of the song: ";
       // cin >> name;
        //string junk;
        getline(cin,name);
        m.AddToPlaylist(name);
    }
    else if(choice == 2)
    {
        m.printPlaylist();
    }
    else if(choice == 3)
    {
        string title;
        cout<<"Enter the song you'd like to add to up next: ";
        //cin>>title;
       // string junk;
        getline(cin,title);
        m.AddToUpNext(title);
    }
    else if(choice == 4)
    {
        m.PlaySong();
    }
    else if(choice == 5)
    {
        m.printQueue();
    }
    else if(choice == 6){
        cout<<"Enter song you wish to search for: ";
        string name;
        //cin>>name;
        //string junk;
        getline(cin,name);
        m.searchPlaylist(name);
    }
    }
    cout<<""<<endl;
    cout<<"Shutting down. See you next time."<<endl;

}
