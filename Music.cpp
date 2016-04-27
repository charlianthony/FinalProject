#include "Music.h"
#include <iostream>

using namespace std;

Music::Music(int qs)
{
    //ctor
    queueSize = qs;
    arrayQueue = new string[queueSize];
    queueHead = 0;
    queueTail = 0;
    queueCount = 0;
    head = NULL;
}

Music::~Music()
{
    //dtor
}

bool Music::queueIsFull(){
    if(queueCount == queueSize){
        return true;
    }else{
        return false;
    }
}

bool Music::queueIsEmpty(){
    if(queueCount == 0)
        return true;
    else
        return false;
}

void Music::AddToUpNext(std::string title)
{
    if(!queueIsFull()){
        arrayQueue[queueTail] = title;
        queueCount++;
        if(queueTail == queueSize)
            queueTail = 0;
        else
            queueTail++;
    }
    else{
        cout<<"Queue is full."<<endl;
    }

}
string Music::PlaySong(){
    string title;
    if(!queueIsEmpty()){
		title = arrayQueue[queueHead];
		queueCount--;
		if(queueHead == queueSize-1)
			queueHead = 0;
		else
			queueHead++;
        cout<<"Currently playing: "<<title<<endl;
	}
	if(queueIsEmpty()){
		cout<<"Your current music queue is empty."<<endl;
	}
}

void Music::printQueue(){
    if(!queueIsEmpty()){
    cout<<"Coming up: "<<endl;
    for(int i=queueHead; i<queueTail; i++){
        cout<<i<<": "<<arrayQueue[i]<<endl;
    }
    }else{
        cout<<"Empty"<<endl;
    }
}

void Music::AddToPlaylist(std::string title){
    Song *temp = new Song;
    Song *add = new Song;
    add->title = title;
    add->next = NULL;

    if(!head)
        head = add;
    else{
        temp = head;
        while(head->next != NULL){
            temp = temp->next;
        }
        temp->next = add;
        temp->next->next = NULL;
    }
}

void Music::printPlaylist(){
    Song *temp;
    temp = head;

    cout<<"Your favorite playlist:"<<endl;
    while(temp){
        cout<<temp->title<<endl;
        temp = temp->next;
    }
    if(!temp)
        cout<<"Your playlist is currently empty."<<endl;
}

void Music::searchPlaylist(std::string title){
    Song *temp = head;
    Song *returnNode = NULL;
    bool found = false;
    while(!found && temp!=NULL){
        if(temp->title == title){
            found = true;
            returnNode = temp;
        }else{
            temp = temp->next;
        }
    }
    if(found == true){
        cout<<"The song '"<<returnNode->title<<"'"<<" is currently on your playlist."<<endl;
    }else{
        cout<<"Song not found."<<endl;
    }
}
