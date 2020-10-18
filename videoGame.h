#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class videoGame: public media {
 public:
  videoGame(string Publisher, float Rating, int Year, string Title, int Type);
  string getPublisher();
  float getRating();
  void PrintVideoGame();
  ~videoGame();
 private:
  string publisher;
  float rating;
};
