#include <iostream>
#include "videoGame.h"
#include <string.h>

using namespace std;

videoGame::videoGame(string Publisher, float Rating, int Year, string Title, int Type):
  media(Title, Year, Type){
  publisher = Publisher;
  rating = Rating;
}
videoGame::~videoGame() {
  
}
void videoGame::PrintVideoGame() {
  cout << endl;
  PrintMedia();
  cout << "Publisher:" << publisher << endl;
  cout << "Rating:" << rating << endl;
  cout << endl;
}
string videoGame::getPublisher() {
  return publisher;
}
float videoGame::getRating() {
  return rating;
}
