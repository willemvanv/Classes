#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class videoGame: public media {
  //Public fuctions
 public:
  videoGame(char Publisher[99], float Rating, int Year, char Title[99], int Type);
  char* getPublisher();
  float getRating();
  void PrintVideoGame();
  ~videoGame();
  //Private vars
 private:
  char publisher[99];
  float rating;
};
