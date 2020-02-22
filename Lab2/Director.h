// Functions.cpp
// Name: Ryan Wong
// UCINetID: rswong2

#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include <iostream>
#include <string>
using namespace std;

class Director {

private:
	string m_first_name;
	string m_last_name;
	int    m_birth_year;
	int	   m_number_filmed;

public:
	Director();
	Director(string firstn, string lastn, int year, int films);

	void	setFirstName(string firstn);
	string	getFirstName();

	void	setLastName(string lastn);
	string	getLastName();

	void	setBirthYear(int year);
	int		getBirthYear();

	void	setNumOfMovies(int num);
	int		getNumOfMovies();
};

#endif
