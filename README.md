# FinalProject

Music Database

Project Summary:
My program is simple and has been designed to act like a music database. There is a menu that appears while the program 
is running that allows the user to choose one of seven options. The first component of the program is the playlist
functionality. Option one allows the user to add a song to a playlist by simply entering the title of the song. Option two 
allows the user to see which songs are included in the playlist they have created. The second component of this 
program is the ability to play songs and select certain songs to be added to a queue to be played next. Option three allows the
user to add a song, in their playlist or otherwise, to play next. To start playing music that has been added to the queue,
the user selects option four. Option five allows the user to check which songs they have left in their queue to be played
next. And option six allows the user to see all the songs that have been added to their playlist. By entering in the number
seven, the program shuts down and says goodbye. 

How to Run:
  1. Download all three files titled "menu.cpp", "Music.h", and "Music.cpp"
  2. Open the three files in an operating system of your choice. And Build and run the program.
In the terminal a welome menu will appear with 7 drop down options. You will then be prompted to choose one of the 
7 options. Whichever option you choose, you will then be prompted to enter the title of a song. For example, if you
choose option 1, type in the title of the song that you would like to add to your playlist and press ENTER. After pressing
ENTER, the main menu will appear again. At any point in the program you wish to exit out/quit, just enter the number 7
and the program will shut down and quit. 

This program recquires a compiler to build and run. 

System Requirments: 
This program was originally created for Mac, although if your operating system is on a virtual machine, it should be 
able to run regradless. 

Issues/bugs:
The only issues I have had with this program is that it will sometimes choose to segment fault when a song is added to
the playlist after two or three songs have been added. And it segment faults when you try to play a song and there are no
current songs in the queue. I am hopeful that I will be able to resolve these bugs but time was the issue here. 

