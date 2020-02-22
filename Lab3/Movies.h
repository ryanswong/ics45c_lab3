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

	void	rentMovie(Renter &r);
	void	returnRental(int renterId);

	void	setMovieCode(string movie_code);
	string	getMovieCode();

	void	setMovieName(string movie_name);
	string	getMovieName();

	void	setNumCopies(int num_copies);
	int		getNumCopies();

	void show_array();
};

#endif
