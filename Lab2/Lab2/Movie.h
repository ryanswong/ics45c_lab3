// Functions.cpp
// Name: Ryan Wong
// UCINetID: rswong2

#ifndef MOVIE_H_
#define MOVIE_H_

#include "Director.h"

class Movie : public Director
{
private:
    int     m_duration;
    int     m_year_released;
    float   m_price;
    string  m_title;

public:
    //movieDirector - an object representing the Director of the movie
    Director movieDirector;

    Movie();
    //Movie(duration of the movie, release year, movie price, movie title, director first name, director last name,
    //	director year of birth, number of films for the director)
    Movie(int duration, int r_year, float movie_price, string movie_title,
                 string first_name, string lasst_name, int birth_year, int number_filmed);
    Movie(Movie&);

    void    setMovieTime(int duration);
    int     getMovieTime();

    void    setMovieYearOut(int r_year);
    int     getMovieYearOut();

    void    setMoviePrice(float movie_price);
    int     getMoviePrice();

    void    setMovieTitle(string movie_title);
    string  getMovieTitle();

    void    printMovieInfo();
};

#endif
