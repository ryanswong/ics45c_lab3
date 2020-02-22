// Functions.cpp
// Name: Ryan Wong
// UCINetID: rswong2


#include "Director.h"

// default constructor
Director::Director() {}

// contructor
Director::Director(string firstn, string lastn, int year, int films) {
	m_first_name = firstn;
	m_last_name = lastn;
	m_birth_year = year;
	m_number_filmed = films;
}

void 	Director::setFirstName(string m_first_name) { this->m_first_name = m_first_name; }
string 	Director::getFirstName(){ return m_first_name; }

void 	Director::setLastName(string m_last_name) { this->m_last_name = m_last_name; }
string 	Director::getLastName(){ return m_last_name; }

void 	Director::setBirthYear(int m_birth_year) { this->m_birth_year = m_birth_year; }
int 	Director::getBirthYear(){ return m_birth_year; }

void 	Director::setNumOfMovies(int m_number_filmed) { this->m_number_filmed = m_number_filmed; }
int 	Director::getNumOfMovies(){ return m_number_filmed; }


