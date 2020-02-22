#ifndef MOVIEMANAGER_H_
#define MOVIEMANAGER_H_

#include "MovieManagerUI.h"

class Manager {

private:
	//Movies movie_list[20];
	int total_movies = 0;
public:
	void run();
	void addMovies(Movie m);
	void discontinueMOvie();
	void rentMovie();
	void returnRental();
	void printInventory();


};

#endif
