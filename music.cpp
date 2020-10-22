#include <iostream>
#include "music.h"
#include <string.h>

using namespace std;
//Deconstructor
music::~music() {
  
}
char* music::getPublisher() {
  return publisher;
}
char* music::getArtist() {
  return artist;
}
int music::getDuration() {
  return duration;
}
//Search function
void music::PrintMusic() {
  cout << endl;
  PrintMedia();
  cout << "Artist:" << artist << endl;
  cout << "Publisher:" << publisher << endl;
  cout << "Duration:" << duration << endl;
  cout << endl;
}
//Constructor
music::music(char Artist[99], char Publisher[99], int Duration,
	     int Year, char Title[99], int Type): media(Title, Year, Type) {
  strcpy(artist, Artist);
  strcpy(publisher, Publisher);
  duration = Duration;
}
