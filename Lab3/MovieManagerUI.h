#ifndef MOVIEMANAGERUI_H_
#define MOVIEMANAGERUI_H_

#include "Movies.h"

class MovieManagerUI {

public:
	static void printMenu();
	static string getCommand();

	static void getMovieInfo();
	static void getMovieCode();
	static void getRenterInfo();
	static void getRenterId();

};


#endif
