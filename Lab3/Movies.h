#ifndef MOVIES_H_
#define MOVIES_H_

#include "Renter.h"

class Movie {

private:
	string	movie_code;
	string	movie_name;
	int		num_copies;
	Renter	renters[10];
	//array<Renter, 10> renters;
	
public:

	Movie();
	Movie(string movie_code, string movie_name, int num_copies);

	void	rentMovie(Renter);
	void	returnRental(int);

	void	setMovieCode(string);
	string	getMovieCode();

	void	setMovieName(string);
	string	getMovieName();

	void	setNumCopies(int);
	int		getNumCopies();

	void show_array();

	friend ostream& operator<<(ostream& os, Movie&);

};

#endif
