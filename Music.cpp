#include "Music.h"
#include <iostream>
#include <sstream>

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
    delete []arrayQueue;
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
	else{
		cout<<"Your current music queue is empty."<<endl;
	}
	return title;
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
    //stringstream ss(title);
   string piece;
   //while (title)
  // {
   if (queueIsFull()!=true)
   {
       arrayQueue[queueTail]=title;
       queueCount++;

      if (queueTail==queueSize-1)
       {

           queueTail=0;

       }
       else
       {
           queueTail++;
       }
  // }
   }




    /*Song *temp = new Song;
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
    }*/

}

void Music::printPlaylist(){
   // Song *temp;
    //temp = head;

    cout<<"Your favorite playlist:"<<endl;
    int cur=queueHead;
     for (int i=0; i<queueCount; i++)
   {   cout<<arrayQueue[cur]<<endl;
       cur++;
       if (cur==queueSize)
       {   cur=0;
       }
   }
    /*while(temp){
        cout<<temp->title<<endl;
        temp = temp->next;*/
    if(queueCount==0)
        cout<<"Your playlist is currently empty."<<endl;
}

void Music::searchPlaylist(std::string title){

    bool found = false;
    int cur=queueHead;
    for(int i=0;i<queueCount;i++)
    {
        if(arrayQueue[cur]==title)
        {
            found=true;
        }
        cur++;
        if (cur==queueSize)
            cur=0;
    }

    /*Song *temp = head;
    Song *returnNode = NULL;
    bool found = false;

    while(!found && temp!=NULL){
        if(temp->title == title){
            found = true;
            returnNode = temp;
        }else{
            temp = temp->next;
        }
    }*/
    if(found == true){
        cout<<"The song '"<<title<<"'"<<" is currently on your playlist."<<endl;
    }else{
        cout<<"Song not found."<<endl;
    }
}
