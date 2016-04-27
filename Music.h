#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>

using namespace std;

struct Song{
    string title;
    Song *next;
};

class Music
{
    public:
        Music(int);
        virtual ~Music();
        void AddToUpNext(std::string); //enqueue to add to up next
        std::string PlaySong(); //dequeue to play the song
        void printQueue();
        void AddToPlaylist(std::string);
        void printPlaylist();
        void searchPlaylist(std::string);
        bool queueIsFull(); //send when full
        bool queueIsEmpty();
        void BuildPlaylist();


    protected:
    private:
        int queueSize;
        int queueHead;
        int queueTail;
        int queueCount;
        std::string *arrayQueue;
        Song *head;
        Song *tail;

};

#endif // MUSIC_H
