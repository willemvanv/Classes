#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class music: public media {
  //Public fuctions
 public:
  music(char Artist[99], char Publisher[99], int Duration, int Year,
	char Title[99], int Type);
  void PrintMusic();
  char* getArtist();
  char* getPublisher();
  int getDuration();
  ~music();
  //Private variables
 private:
  char artist[99];
  char publisher[99];
  int duration;
};
