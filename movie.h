#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class movie: public media{
 public:
  movie(string Director, int Duration, float Rating, int Year, string Title, int Type);
  string getDirector();
  int getDuration();
  float getRating();
  void PrintMovie();
  ~movie();
  
 private:
  string director;
  int duration;
  float rating;
};
