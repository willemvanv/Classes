#include <iostream>
#include <vector>
#include <string.h>
#include "music.h"
#include "movie.h"
#include "videoGame.h"

using namespace std;

//Declaring Functions
void add(media **a);
void search(int b, media **a);
void delet(int b, media **a);

//Variables
media *list[99];
int place = 0;

//Main
int main() {
  bool running = true;
  char input[10];
  //Running loop
  while (running == true) {
    cout << "Enter Command (all lowecase)(add/search/delete/quit)" << endl;
    cin.getline(input, 10);
    if (input[0] == 'a' && input[1] == 'd' &&
	input[2] == 'd') {
      add(&list[place]);
      place++;
    }
    if (input[0] == 's' && input[1] == 'e' &&
	input[2] == 'a' && input[3] == 'r' &&
	input[4] == 'c' && input[5] == 'h') {
      search(place, list);
    }
    if (input[0] == 'd' && input[1] == 'e' &&
	input[2] == 'l' && input[3] == 'e' &&
	input[4] == 't' && input[5] == 'e') {
      delet(place, list);
    }
    //End loop
    if (input[0] == 'q' && input[1] == 'u' &&
	input[2] == 'i' && input[3] == 't') {
      running = false;
    }
    input[0] = ' ';
  }

}
//Add function
void add(media **a) {
  char d[20];
  int yeara;
  char titlea[99];
  int typea;
  cout << "Enter Year" << endl;
  cin >> yeara;
  cout << "Enter Title" << endl;
  cin >> titlea;
  cout << "Enter Media Type (music, videogame, movie)" << endl;
  cin >> d;
  if (d[0] == 'm' && d[1] == 'u' && d[2] == 's' &&
      d[3] == 'i' && d[4] == 'c') {
    typea = 0;
    char artista[99];
    char publishera[99];
    int durationa;
    cout << "Enter Artist" << endl;
    cin >> artista;
    cout << "Enter Publisher" << endl;
    cin >> publishera;
    cout << "Enter Duration(seconds)" << endl;
    cin >> durationa;
    *a = new music(artista, publishera, durationa, yeara, titlea, typea);
  } else if (d[0] == 'm' && d[1] == 'o' && d[2] == 'v' &&
	     d[3] == 'i' && d[4] == 'e') {
    typea = 1;
    char directorb[99];
    int durationb;
    float ratingb;
    cout << "Enter Director" << endl;
    cin >> directorb;
    cout << "Enter Duration(minutes)" << endl;
    cin >> durationb;
    cout << "Enter Rating" << endl;
    cin >> ratingb;
    *a = new movie(directorb, durationb, ratingb, yeara, titlea, typea);
  } else if (d[0] == 'v' && d[1] == 'i' && d[2] == 'd' &&
	     d[3] == 'e' && d[4] == 'o' &&
	     d[5] == 'g' && d[6] == 'a' && d[7] == 'm' &&
	     d[8] == 'e') {
    typea = 2;
    char publisherc[99];
    float ratingc;
    cout << "Enter Publisher" << endl;
    cin >> publisherc;
    cout << "Enter Rating" << endl;
    cin >> ratingc;
    *a = new videoGame(publisherc, ratingc, yeara, titlea, typea);
  }
}
//Search function
void search(int b, media **a) {
  char input[2];
  int no;
  char tit[99];
  videoGame *vg;
  music *mus;
  movie *mov;
  cout << "Year or Title?(y/t)" << endl;
  cin.getline(input, 2);
  if (input[0] == 'y') {
    cout << "Enter Year" << endl;
    cin >> no;
    for (int i = 0; i < b; i++) {
      int c;
      c = a[i]->SearchYear(no);
      if (c != 3) {
	if (mus = dynamic_cast<music*>(a[i])) {
	  mus->PrintMusic();
	}
	if (mov = dynamic_cast<movie*>(a[i])) {
	  mov->PrintMovie();
	}
	if (vg = dynamic_cast<videoGame*>(a[i])) {
	  vg->PrintVideoGame();
	}
      }
    }
  }
  else if (input[0] == 't') {
    cout << "Enter Title" << endl;
    cin.getline(tit, 99);
    for (int i = 0; i < b; i++) {
      int c;
      c = a[i]->SearchTitle(tit);
      if (c != 3) {
	if (c == 0) {
        if (mus = dynamic_cast<music*>(a[i])) {
	  mus->PrintMusic();
	}
	}
	if (c == 1) {
	if (mov = dynamic_cast<movie*>(a[i])) {
	  mov->PrintMovie();
	}
	}
	if (c == 2) {
	if (vg = dynamic_cast<videoGame*>(a[i])) {
	  vg->PrintVideoGame();
	}
	}
      }
    }
  }
}
//Delete function
void delet(int b, media **a) {
  char input[2];
  int no;
  char tit[99];
  videoGame *vg;
  music *mus;
  movie *mov;
  cout << "Year or Title?(y/t)" << endl;
  cin.getline(input, 2);
  if (input[0] == 'y') {
    cout << "Enter Year" << endl;
    cin >> no;
    for (int i = 0; i < b; i++) {
      int c;
      c = a[i]->SearchYear(no);
      if (c != 3) {
	if (mus = dynamic_cast<music*>(a[i])) {
	  mus->~music();
	}
	if (mov = dynamic_cast<movie*>(a[i])) {
	  mov->~movie();
	}
	if (vg = dynamic_cast<videoGame*>(a[i])) {
	  vg->~videoGame();
	}
      }
    }
  }
  else if (input[0] == 't') {
    cout << "Enter Title" << endl;
    cin >> tit;
    for (int i = 0; i < b; i++) {
      int c;
      c = a[i]->SearchTitle(tit);
      cout << c << endl;
      if (c != 3) {
	if (c == 0) {
        if (mus = dynamic_cast<music*>(a[i])) {
	  mus->~music();
	}
	}
	if (c == 1) {
	if (mov = dynamic_cast<movie*>(a[i])) {
	  mov->~movie();
	}
	}
	if (c == 2) {
	if (vg = dynamic_cast<videoGame*>(a[i])) {
	  vg->~videoGame();
	}
	}
      }
    }
  }
}
