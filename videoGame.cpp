#include <iostream>
#include "videoGame.h"
#include <string.h>

using namespace std;
//Constructor
videoGame::videoGame(char Publisher[99], float Rating, int Year, char Title[99], int Type):
  media(Title, Year, Type){
  strcpy(publisher, Publisher);
  rating = Rating;
}
//Deconstructor
videoGame::~videoGame() {
  
}
//Search function
void videoGame::PrintVideoGame() {
  cout << endl;
  PrintMedia();
  cout << "Publisher:" << publisher << endl;
  cout << "Rating:" << rating << endl;
  cout << endl;
}
char* videoGame::getPublisher() {
  return publisher;
}
float videoGame::getRating() {
  return rating;
}
