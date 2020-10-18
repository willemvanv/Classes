#include <iostream>
#include "media.h"
#include <string.h>
#include "music.h"
#include "videoGame.h"
#include "movie.h"

using namespace std;

media::media(string Title, int Year, int Type) {
  title = Title;
  year = Year;
  type = Type;
}

media::~media(){
  
}

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
int media::SearchTitle(string b) {
  if (title == b) {
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


