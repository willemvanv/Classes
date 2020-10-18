#include <iostream>
#include "movie.h"
#include <string.h>

using namespace std;

movie::movie(string Director, int Duration, float Rating, int Year, string Title, int Type):
  media(Title, Year, Type){
  director = Director;
  duration = Duration;
  rating = Rating;
}
movie::~movie() {
  
}
void movie::PrintMovie() {
  cout << endl;
  PrintMedia();
  cout << "Director:" << director << endl;
  cout << "Duration:" << duration << endl;
  cout << "Rating:" << rating << endl;
  cout << endl;
}
string movie::getDirector() {
  return director;
}
int movie::getDuration() {
  return duration;
}
float movie::getRating() {
  return rating;
}
