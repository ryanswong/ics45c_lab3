// Functions.cpp
// Name: Ryan Wong
// UCINetID: rswong2

#include "Movie.h"

int main()
{
	// instantiating first movie object
	cout << "----- original -----" << endl;
	Movie m1;
	m1.setMovieTime(132);
	m1.setMovieYearOut(2019);
	m1.setMoviePrice(5.99f);
	m1.setMovieTitle("Parasite");
	m1.movieDirector.setFirstName("Bong");
	m1.movieDirector.setLastName("Joon-ho");
	m1.movieDirector.setBirthYear(1969);
	m1.movieDirector.setNumOfMovies(15);
	m1.printMovieInfo();

	//Movie m1(132, 2019, 5.99f, "Parasite",
	//		"Bong", "Joon-ho", 1969, 15);



	// Copy of movie obj one
	cout << "\n----- copy -----" << endl;
	Movie m2(m1);
	m2.printMovieInfo();

	

	// changing director's number of film releases
	cout << "\n----- incremented -----" << endl;
	m2.movieDirector.setNumOfMovies(16);
	m2.printMovieInfo();

	return 0;
}

