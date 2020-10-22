#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class movie: public media{
  //Public methods
 public:
  movie(char Director[99], int Duration, float Rating, int Year, char Title[99], int Type);
  char* getDirector();
  int getDuration();
  float getRating();
  void PrintMovie();
  ~movie();
  //private variables
 private:
  char director[99];
  int duration;
  float rating;
};
