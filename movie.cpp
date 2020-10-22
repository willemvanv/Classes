#include <iostream>
#include "movie.h"
#include <string.h>

using namespace std;
//Constructor
movie::movie(char Director[99], int Duration, float Rating, int Year, char Title[99], int Type):
  media(Title, Year, Type){
  strcpy(director, Director);
  duration = Duration;
  rating = Rating;
}
//Deconstructor
movie::~movie() {
  
}
//Search function
void movie::PrintMovie() {
  cout << endl;
  PrintMedia();
  cout << "Director:" << director << endl;
  cout << "Duration:" << duration << endl;
  cout << "Rating:" << rating << endl;
  cout << endl;
}
char* movie::getDirector() {
  return director;
}
int movie::getDuration() {
  return duration;
}
float movie::getRating() {
  return rating;
}
