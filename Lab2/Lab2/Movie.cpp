// Functions.cpp
// Name: Ryan Wong
// UCINetID: rswong2

#include "Movie.h"

Movie::Director movieDirector;

// default constructor
Movie::Movie() {
	m_duration = 0;
	m_year_released = 0;
	m_price = 0.00;
	m_title = "";
	movieDirector.setFirstName("");
	movieDirector.setLastName("");
	movieDirector.setBirthYear(0);
	movieDirector.setNumOfMovies(0);
	}

// contructor 
Movie::Movie(int duration, int r_year, float movie_price, string movie_title,
			 string first_name, string last_name, int birth_year, int number_filmed) {
	m_duration = duration;
	m_year_released = r_year;
	m_price = movie_price;
	m_title = movie_title;
	movieDirector.setFirstName(first_name);
	movieDirector.setLastName(last_name);
	movieDirector.setBirthYear(birth_year);
	movieDirector.setNumOfMovies(number_filmed);
	}



// copy constructor
Movie::Movie(Movie& movie) {
	this->m_duration = movie.m_duration;
	this->m_year_released = movie.m_year_released;
	this->m_price = movie.m_price;
	this->m_title = movie.m_title;
	this->movieDirector = movie.movieDirector;

}

void 	Movie::setMovieTime(int m_duration) { this->m_duration = m_duration; }
int 	Movie::getMovieTime() { return m_duration; }

void 	Movie::setMovieYearOut(int m_year_released) { this->m_year_released = m_year_released; }
int 	Movie::getMovieYearOut() { return m_year_released; }

void 	Movie::setMoviePrice(float m_price) { this->m_price = m_price; }
int 	Movie::getMoviePrice() { return m_price; }

void 	Movie::setMovieTitle(string m_title) { this->m_title = m_title; }
string 	Movie::getMovieTitle() { return m_title; }

void 	Movie::printMovieInfo() {

	cout << "Title: " << m_title << endl;
	cout << "Published in: " << m_year_released << endl;
	cout << "Duration of Movie: " << m_duration << " minutes" << endl;
	cout << "Price: $" << m_price << endl;
	cout << "Directed by: "
		 << movieDirector.getFirstName() << " "
		 << movieDirector.getLastName() << ", "
		 << "who was born in " << movieDirector.getBirthYear() << " "
		 << "and has " << movieDirector.getNumOfMovies() << " releases."
		 << endl;

}

