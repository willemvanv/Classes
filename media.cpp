#include <iostream>
#include "media.h"
#include <string.h>
#include "music.h"
#include "videoGame.h"
#include "movie.h"

using namespace std;
//Constructor
media::media(char Title[99], int Year, int Type) {
  strcpy(title, Title);
  year = Year;
  type = Type;
}
//Deconstructor
media::~media(){
  
}
//Search function
void media::PrintMedia() {
  cout << "Title:" << title << endl;
  cout << "Year:" << year << endl;
}
int media::SearchYear(int b) {
  if (year == b) {
    if (type == 0) {
      return 0;
    }
    if (type == 1) {
      return 1;
    }
    if (type == 2) {
      return 2;
    }
  }
  return 3;
}
int media::SearchTitle(char b[99]) {
  if (strcmp(title, b) == 0) {
    if (type == 0) {
      return 0;
    }
    if (type == 1) {
      return 1;
    }
    if (type == 2) {
      return 2;
    }
  }
  return 3;
}


