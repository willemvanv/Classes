#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class music: public media {
 public:
  music(string Artist, string Publisher,int Duration, int Year,
	string Title, int Type);
  void PrintMusic();
  string getArtist();
  string getPublisher();
  int getDuration();
  ~music();
  
 private:
  string artist;
  string publisher;
  int duration;
};
