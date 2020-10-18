#include <iostream>
#include "music.h"
#include <string.h>

using namespace std;

music::~music() {
  
}
string music::getPublisher() {
  return publisher;
}
string music::getArtist() {
  return artist;
}
int music::getDuration() {
  return duration;
}
void music::PrintMusic() {
  cout << endl;
  PrintMedia();
  cout << "Artist:" << artist << endl;
  cout << "Publisher:" << publisher << endl;
  cout << "Duration:" << duration << endl;
  cout << endl;
}
music::music(string Artist, string Publisher,int Duration,
	     int Year, string Title, int Type): media(Title, Year, Type) {
  artist = Artist;
  publisher = Publisher;
  duration = Duration;
}
