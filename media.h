#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string.h>

using namespace std;

class media {
 public:
  media(string Title, int Year, int Type);
  void PrintMedia();
  virtual ~media();
  int SearchYear(int b);
  int SearchTitle(string b);
 private:
  int type;
  int year;
  string title;
};

#endif
