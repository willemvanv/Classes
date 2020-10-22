#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string.h>

using namespace std;

class media {
  //Public functions
 public:
  media(char Title[99], int Year, int Type);
  void PrintMedia();
  virtual ~media();
  int SearchYear(int b);
  int SearchTitle(char b[99]);
  //Private vars
 private:
  int type;
  int year;
  char title[99];
};

#endif
